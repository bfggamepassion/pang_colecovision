/**************************************************/
/*** PANG       ***********************************/
/**************************************************/
#include <coleco.h>
#include <getput1.h>
#include <comp.h>

#define chrtab  0x1800 /* écran en linéaire */
#define chrgen  0x0000 /* table des caractères */
#define coltab  0x2000 /* couleur des caractères */
#define sprtab  0x3800 /* sprite_pattern_table */
#define sprgen  0x1b00 /* sprite_attribute_table */
#define buffer  0x1c00 /* buffer screen 2 */

#define	CREATE_BALL	 1
#define CREATE_HOBS 2
#define CREATE_VOBS 3
#define CREATE_LADDER 4
#define PLAYER_START 5
#define OPTIMIZE 6

#define BONUS_GLUE 1
#define BONUS_EXTRALIFE 42<<2
#define BONUS_FREEZE 41<<2
#define BONUS_INVINCIBLE 40<<2
#define BONUS_BOMB 43<<2
#define BONUS_SHOOT 4

#define	BIG	0
#define	MEDIUM 1
#define SMALL 2
#define MICRO 3
#define DROITE 1
#define GAUCHE -1
#define INACTIF 204
#define RESERVED 205
#define GRAV 8
#define MAXBALL 16
#define MAXOBS 10
#define MAXBONUS 3

#define HORIZONTAL 1
#define VERTICAL 2
#define VELDOWN 4
#define TIR 8
#define VELDOWNLESS 16
#define NULL 128

#define UNBREAKABLE 255
#define BREAKABLE 254
#define SHOOT 253
#define LADDER_RIGHT 252
#define LADDER_LEFT 251

#define W_TITLE	0
#define	W_INGAME 1
#define W_NEXTLEVEL 2
#define W_LOOSE_LIFE 3
#define W_GAME_OVER 4

#define S_TRUE 1
#define S_FALSE 0

/* from music.s */
extern const void music[];
extern const void music2[];
extern const void music3[];
extern const void music4[];
/* from sound.s */
extern const void snd_table[];

extern const byte* const levels_Pointer[];

//extern const byte NAMERLE[];
//extern const byte PATTERNRLE[];
//extern const byte COLORRLE[];
extern const byte SPATTERNRLE[];

extern const byte TITLE_NAMEDAN0[];
extern const byte TITLE_PATTERNDAN0[];
extern const byte TITLE_COLORDAN0[];

/*
extern const byte WINPOSE1_NAMERLE[];
extern const byte WINPOSE1_PATTERNRLE[];
extern const byte WINPOSE1_COLORRLE[];
*/

extern const byte WINPOSE1_NAMEDAN0[];
extern const byte WINPOSE1_PATTERNDAN0[];
extern const byte WINPOSE1_COLORDAN0[];
//extern const byte WINPOSE2_NAMEDAN0[];
//extern const byte WINPOSE2_PATTERNDAN0[];
//extern const byte WINPOSE2_COLORDAN0[];

/*
extern const byte FOND1_NAMERLE[];
extern const byte FOND1_PATTERNRLE[];
extern const byte FOND1_COLORRLE[];
*/

extern const byte FOND1_NAMEDAN0[];
extern const byte FOND1_PATTERNDAN0[];
extern const byte FOND1_COLORDAN0[];

extern const byte FOND2_NAMEDAN0[];
extern const byte FOND2_PATTERNDAN0[];
extern const byte FOND2_COLORDAN0[];

//extern const byte FOND3_NAMEDAN0[];
//extern const byte FOND3_PATTERNDAN0[];
//extern const byte FOND3_COLORDAN0[];

extern const byte FOND4_NAMEDAN0[];
extern const byte FOND4_PATTERNDAN0[];
extern const byte FOND4_COLORDAN0[];

extern const byte FOND5_NAMEDAN0[];
extern const byte FOND5_PATTERNDAN0[];
extern const byte FOND5_COLORDAN0[];

char ticks;
byte getBonus;
byte char_save[26];
byte break_save[50]; // 50 caractères pour saver les breakable
byte bidx; // Position dans le tableau de sauvegarde

byte c1,c2,c3,c3bis,c4,c5; // Caractères de choppe du joueur
byte freeze;
byte invincible;
byte optimize;

byte lastBallShoot;
byte multiplyer;

byte workflow;
//byte checkCollision;
byte delay0;
byte slowdown;
//byte check[2];

byte shootNmi;
byte restoreBackGroundNmi;
//unsigned int timer;
//unsigned int timerNmi;
byte timer;
byte timer2;
byte timerNmi;
byte nbBalls;
byte currentLevel;
byte currentAnim;
byte currentFond;
byte currentWinPose;
//const byte ballSize[]={32,16,16,16};

typedef struct
{
	char sprno; // -1 inactif
	byte car;	// Caractère de détection
	unsigned int time;
} s_bonus;

s_bonus bonus[3];

typedef struct
{
	byte actif;
	byte x;
	byte y;
	byte h;
} s_shoot;

s_shoot shoot;

typedef struct
{
	//char sprno;
	byte timer;
} s_explosion;

s_explosion explosion;

typedef struct
{
	byte x;
	byte y;	
	byte nblives;
	unsigned int score;
	unsigned int hiscore;
}s_player;

s_player player;

typedef struct
{
	byte type;
	byte x;
	byte y;
	byte h;
	byte l;
	char break_idx;
} s_obs;

s_obs obs[MAXOBS];

typedef struct
{
	byte sprno;
	byte type;
	int vel;
	byte posx; // Pas de virgule flottante
	unsigned int posy; // Virgule flottante
	char move;
} s_ball;

s_ball ball[MAXBALL];

sprite_t bsprites[32];

byte oddNmi;
byte odd;

void pressAKey()
{
		while (!(joypad_1&(FIRE1|FIRE2))) {}
		while ((joypad_1&(FIRE1|FIRE2))) {}
}

char getFreeSprite()
{
	byte i;
	
	odd+=8;
	if (odd>=32) odd = 0;
	
	for (i=odd;i<32;i++)
	if (sprites[i].y==INACTIF) 
	return i;	
	for (i=0;i<odd;i++)
	if (sprites[i].y==INACTIF) 
	return i;
	
	return -1;
}


void initExplosion()
{
	explosion.timer=0;
	//explosion.sprno=-1;
	
}
void createExplosion(byte x,byte y,byte typeBall)
{
	//char s;
	
	//if (explosion.sprno==-1)
	//{
		//s = getFreeSprite();
		//if (s!=-1) explosion.sprno = s;					
	//}
	
	//if (explosion.sprno!=-1)
	//{
		explosion.timer = 5;
		// Mettre à jour le sprite de l'explosion
		sprites[31].x = x;
		sprites[31].y = y;
		sprites[31].colour = 6;
	
		if (typeBall==MICRO)
			sprites[31].pattern = 51<<2;
		else
			sprites[31].pattern = 50<<2;
	//}
}

void updateExplosion()
{
	if (explosion.timer==1)
	{
		sprites[31].y = RESERVED;
	}
	if (explosion.timer>0) explosion.timer--;	
}

byte isCollision(byte x1,byte y1,byte h1,byte l1,byte x2,byte y2,byte h2,byte l2)
//byte isCollision(int x1,int y1,int h1,int l1,int x2,int y2,int h2,int l2)
{
	if(y1 > y2+h2) return S_FALSE;
	if(y1+h1 < y2) return S_FALSE;
	if(x1 > x2+l2) return S_FALSE;
	if(x1+l1 < x2) return S_FALSE;

	return S_TRUE;
}

void updatePlayerSprites()
{
	sprites[0].x = player.x;
	sprites[0].y = player.y;
	
	sprites[1].x = player.x;
	sprites[1].y = player.y+16;
	
	sprites[2].x = player.x;
	sprites[2].y = player.y;
	
	sprites[3].x = player.x;
	sprites[3].y = player.y+16;
}
/*
void LoadPatternAndshowAScreen(char* p,char *c,char *n,char show)
{
	screen_off();
	disable_nmi();			
	cls();
	load_patternrle(p);			
	rle2vram(c,coltab);
	duplicate_pattern();
	if (show==1) rle2vram(n,chrtab);				
	enable_nmi();
	screen_on();			
}
*/
void LoadPatternAndshowAScreenDan0(char* p,char *c,char *n,char show,unsigned dest)
{
	if (show==1) dan0alt(dest,n);
	dan0alt(chrgen,p);	
	dan0alt(coltab,c);
	dan0alt(coltab+2048,c);
	dan0alt(coltab+4096,c);
	duplicate_pattern();
}

char createBall(byte type,int x,int y,char direction)
{
	char i,j;
	//byte ix,iy;
	
	if (type>MICRO) return -1;
	
	i=-1;
	for (j=0;j<MAXBALL;j++)
	{
		if (ball[j].type==INACTIF) {i=j;break;}
	}
	
	if (i==-1) return -1;
	
	if (x<8) x=9;
	
	nbBalls++;
	ball[i].type = type;
	ball[i].posx=x;
	ball[i].posy=y*16;
	ball[i].vel=0;
	
	if (direction>0) ball[i].move = 2 /*32*/; else ball[i].move=-2 /*-32*/;
	if (type==BIG)
	{
		if (j==0) {
			ball[i].sprno = 13;
			sprites[13].x = x;
			sprites[13].y = y;
			sprites[13].pattern = 3<<2;
			sprites[13].colour = 6;
			
			sprites[14].x = x + 16;
			sprites[14].y = y;
			sprites[14].pattern = 4<<2;
			sprites[14].colour = 6;
			
			sprites[15].x = x;
			sprites[15].y = y + 16;
			sprites[15].pattern = 5<<2;
			sprites[15].colour = 6;
			
			sprites[16].x = x + 16;
			sprites[16].y = y + 16;
			sprites[16].pattern = 6<<2;
			sprites[16].colour = 6;
		}
		else
		{
			ball[i].sprno = 17;
			sprites[17].x = x;
			sprites[17].y = y;
			sprites[17].pattern = 3<<2;
			sprites[17].colour = 6;
			
			sprites[18].x = x + 16;
			sprites[18].y = y;
			sprites[18].pattern = 4<<2;
			sprites[18].colour = 6;
			
			sprites[19].x = x;
			sprites[19].y = y + 16;
			sprites[19].pattern = 5<<2;
			sprites[19].colour = 6;
			
			sprites[20].x = x + 16;
			sprites[20].y = y + 16;
			sprites[20].pattern = 6<<2;
			sprites[20].colour = 6;
		}
	}
	else
	{
		ball[i].sprno = getFreeSprite();
		
		sprites[ball[i].sprno].x = x;
		sprites[ball[i].sprno].y = y;
	}


	if (type==MICRO)
	{
		sprites[ball[i].sprno].pattern = 2<<2;
		sprites[ball[i].sprno].colour = 8;
	}
	else
	if (type==SMALL)
	{
		sprites[ball[i].sprno].pattern = 1<<2;
		sprites[ball[i].sprno].colour = 9;
	}
	else if (type==MEDIUM)
	{
		sprites[ball[i].sprno].pattern = 0<<2;
		sprites[ball[i].sprno].colour = 8;
	}

	return i;

}

// Hauteur minimale : 3 !!
// x,y position haute gauche de l'échelle
void createLadder(byte x,byte y,byte h)
{
	byte i,py;
	
	put_char(x,y,LADDER_LEFT);put_char(x+1,y,LADDER_RIGHT);
	py = y;
	
	for (i=0;i<(h-1);i++)
	{
		py++;
		put_char(x,py,LADDER_LEFT);put_char(x+1,py,LADDER_RIGHT);
	}
	
	//put_char(x,py,251);put_char(x+1,py,252);
	
	
	
}

void explodeAllBalls()
{
	char b;
	byte i,s;
	byte sortie;
	
	sortie=0;
	while (sortie==0)
	{
		s=0;
		for (i=0;i<MAXBALL;i++)
		{
			if ( (ball[i].type!=MICRO) && (ball[i].type!=INACTIF) )
			{
				b = createBall(ball[i].type+1,sprites[ball[i].sprno].x,sprites[ball[i].sprno].y,1);
				if (b!=-1) ball[b].vel = 64;
				b = createBall(ball[i].type+1,sprites[ball[i].sprno].x-4,sprites[ball[i].sprno].y,-1);	
				if (b!=-1) ball[b].vel = 64;
					
				// On détruit la balle + le tir !!	
				if (ball[i].type!=BIG)
				{
					sprites[ball[i].sprno].y=INACTIF;							
				}
				else
				{
					if (ball[i].sprno==13)
					{
						sprites[13].y = RESERVED;
						sprites[14].y = RESERVED;
						sprites[15].y = RESERVED;
						sprites[16].y = RESERVED;
					}
					else
					{
						sprites[17].y = RESERVED;
						sprites[18].y = RESERVED;
						sprites[19].y = RESERVED;
						sprites[20].y = RESERVED;
					}
				}
					
				ball[i].type=INACTIF;
				nbBalls--;
				s=1;
			}
		}
		if (s==0) sortie=1;
	}
}

void createBonus(byte t,byte x,byte y)
{
	byte i;
	char j;
	
	//pause();
	
	j=-1;
	for (i=0;i<MAXBONUS;i++)
	{
		if (bonus[i].time==0) {j=i;break;}				
	}
	
	if (j==-1) return;
	
	bonus[j].sprno = getFreeSprite();

	sprites[bonus[j].sprno].pattern = t;
	sprites[bonus[j].sprno].x = x;
	sprites[bonus[j].sprno].y = y;
	sprites[bonus[j].sprno].colour = 15;	
	
	bonus[j].time = 400;
}

void moveAllBonus()
{
	byte i;
	
	s_bonus			*this_bonus;
	unsigned int	*this_bonus_time;
	byte			*this_bonus_car;
	char			*this_bonus_sprno;
	
	sprite_t		*this_sprite;
	byte			*this_sprite_x;
	byte			*this_sprite_y;
	byte			*this_sprite_pattern;
	byte			*this_sprite_colour;
	
	
	for (i=0;i<MAXBONUS;i++)
	{
		this_bonus = &bonus[i];
		this_bonus_time = &this_bonus->time;
		
		if ((*this_bonus_time)==0) continue; // Bonus inactif, on ne fait rien
		(*this_bonus_time)--;
		
		
		this_bonus_sprno = &this_bonus->sprno;		
		this_bonus_car = &this_bonus->car;
		
		this_sprite = &sprites[(*this_bonus_sprno)];
		this_sprite_x = &this_sprite->x;
		this_sprite_y = &this_sprite->y;
		this_sprite_pattern = &this_sprite->pattern;
		this_sprite_colour = &this_sprite->colour;
		
		if ((timer&1)==0) (*this_sprite_colour)=15; else (*this_sprite_colour)=1;
		
		(*this_bonus_car) = get_char(((*this_sprite_x+8)>>3),((*this_sprite_y+16)>>3));
		if ((*this_bonus_car)<254)
		      (*this_sprite_y)++; // On fait descendre le bonus
			  
		if (isCollision((*this_sprite_x),(*this_sprite_y),16,16,sprites[1].x,sprites[1].y,16,16))
		{
			if ((*this_sprite_pattern) == BONUS_INVINCIBLE) invincible = 255;
			else
			if ((*this_sprite_pattern) == BONUS_FREEZE) freeze = 200;
			else
			if ((*this_sprite_pattern) == BONUS_EXTRALIFE) player.nblives++;
			else
			if ((*this_sprite_pattern) == BONUS_BOMB) explodeAllBalls();
			
			//(*this_sprite_y) = INACTIF;
			(*this_bonus_time)=0;
		}
		
		if ((*this_bonus_time)==0)
		{
			(*this_sprite_y) = INACTIF;
		}
	}
	
}

// IMPORTANT ! L'OBS 13 et 14 est dédié au tir !!!
void createObs(byte i,byte type,byte x,byte y,byte h,byte l)
{
	obs[i].type = type;
	obs[i].x = x;
	obs[i].y = y;
	obs[i].h = h;
	obs[i].l = l;
}

void destroyObs(byte o)
{
	byte sx,sy,sl,sh;
	
	sx = (obs[o].x>>3);
	sy = (obs[o].y>>3);
	sl = (obs[o].l>>3);
	sh = (obs[o].h>>3);

	put_frame0(&break_save[obs[o].break_idx],sx,sy,sl,sh);
	
	createObs(o,NULL,0,0,0,0);
}

// x,y en position caractères
char findObs(byte x,byte y)
{
	byte px,py,i;
	px = x<<3;
	py = y<<3;
	
	for (i=0;i<(MAXOBS-2);i++) 
	{
		if (obs[i].type==NULL) continue;
		
		if (isCollision(px+1,py,8,8,obs[i].x,obs[i].y,obs[i].h,obs[i].l))
		{
			return i;
		}
	}
	
	return -1;
}

void createHobs(byte n,byte x,byte y,byte l,byte c,byte modifier)
{
	byte i,j,type;
	
	type = HORIZONTAL;
	if (modifier!=NULL) type = type | modifier;
	
	createObs(n,type,x<<3,y<<3,8,l<<3);
	
	if (c==BREAKABLE)
	{
		// Sauvegarde du background
		get_bkgrnd(&break_save[bidx],x,y,l,1);
		obs[n].break_idx=bidx;
		bidx+=l;
	}

	j = x + l;
	
	for (i=x;i<j;i++)
	put_char(i,y,c);
}

void createVobs(byte n,byte x,byte y,byte h,byte c,byte modifier)
{
	byte i,j,type;
	
	type = VERTICAL;
	if (modifier!=NULL) type = type | modifier;

	createObs(n,type,x<<3,y<<3,h<<3,8);
	
	if (c==BREAKABLE)
	{
		// Sauvegarde du background
		get_bkgrnd(&break_save[bidx],x,y,1,h);
		obs[n].break_idx=bidx;
		bidx+=h;
	}

	j = y + h;
	
	for (i=y;i<j;i++)
	put_char(x,i,c);
}



void moveAllBalls()
{
	byte i,j/*,collision*/;
	byte ht,lt,repos;
	int vel_cst;
	char b;
	byte r;
	byte doCheck;
	
	s_ball *this_ball;
	byte *this_ball_sprno;
	byte *this_ball_type;
	int *this_ball_vel;	
	byte *this_ball_posx;
	unsigned int *this_ball_posy;
	char *this_ball_move;
	
	sprite_t *this_sprite;
	byte *this_sprite_x;
	byte *this_sprite_y;
	
	s_obs *this_obs;
	byte *this_obs_type;
	byte *this_obs_x;
	byte *this_obs_y;
	byte *this_obs_h;
	byte *this_obs_l;
	
	for (i=(timer&1);i<MAXBALL;i=i+2)
	{				
		this_ball = &ball[i];
		this_ball_type = &this_ball->type;
		
		if ((*this_ball_type)==INACTIF) continue;
		this_ball_sprno = &this_ball->sprno;
		this_ball_vel = &this_ball->vel;		
		this_ball_posx = &this_ball->posx;
		this_ball_posy = &this_ball->posy;
		this_ball_move = &this_ball->move;
		
		//collision = 0;
		this_sprite = &sprites[(*this_ball_sprno)];
		this_sprite_x = &this_sprite->x;
		this_sprite_y = &this_sprite->y;		
		
		if ((*this_ball_type)==SMALL) {ht=10;lt=10;repos=12;vel_cst=128;}
		else if ((*this_ball_type)==MICRO) {ht=8;lt=8;repos=7;vel_cst=104;}
		else if ((*this_ball_type)==MEDIUM) {ht=14;lt=16;repos=16;vel_cst=160;}
		else {ht=32;lt=32;repos=32;vel_cst=184;}
		
		doCheck=0;
		if ( (optimize==1) && ((timer2&1)==0) ) doCheck = 1;
		if (optimize==0) doCheck = 1;
		
		if (doCheck==1)
		{    //put_char(0,0,254);
			for (j=0;j<MAXOBS;j++) 
			{
				this_obs = &obs[j];
				this_obs_type = &this_obs->type;
				
				if ((*this_obs_type)==NULL) continue;
				//delay0++;
				
				this_obs_x = &this_obs->x;
				this_obs_y = &this_obs->y;
				this_obs_h = &this_obs->h;
				this_obs_l = &this_obs->l;
				
				/*********************************************************************/
				/** Test de remplacement du isCollision pour Optimisation ************/
				/*********************************************************************/
				if((*this_sprite_y) > ((*this_obs_y)+(*this_obs_h))) continue;
				if(((*this_sprite_y)+ht) < (*this_obs_y)) continue;
				if((*this_sprite_x) > ((*this_obs_x)+(*this_obs_l))) continue;
				if(((*this_sprite_x)+lt) < (*this_obs_x)) continue;
				
				//if (isCollision((*this_sprite_x)/*+4*/,(*this_sprite_y)/*+4*/,ht,lt,(*this_obs_x),(*this_obs_y),(*this_obs_h),(*this_obs_l)))
				//{				
				
				if (j==(MAXOBS-1)) // La boule touche le tir
				{
					if (lastBallShoot==(*this_ball_type))
					multiplyer++;
					else
					multiplyer=1;
					
					createExplosion((*this_sprite_x),(*this_sprite_y),(*this_ball_type));
	                
					stop_sound(2);
					play_sound(2);

					player.score = player.score + (multiplyer);
					// Créer 2 nouvelles balles
					b = createBall((*this_ball_type)+1,(*this_sprite_x),(*this_sprite_y),1);
					if (b!=-1) ball[b].vel = 64;
					b = createBall((*this_ball_type)+1,(*this_sprite_x)-4,(*this_sprite_y),-1);	
					if (b!=-1) ball[b].vel = 64;

					if (getBonus<3)
					{
						r = rnd_byte(0,100);
						if (r<20)
						{
							r=rnd_byte(0,100);
							if (r<2)createBonus(BONUS_EXTRALIFE,(*this_sprite_x),(*this_sprite_y));
							else
							if (r<20) createBonus(BONUS_INVINCIBLE,(*this_sprite_x),(*this_sprite_y));
							else
							if (r<40) createBonus(BONUS_FREEZE,(*this_sprite_x),(*this_sprite_y));
							else
							if (r<50) createBonus(BONUS_BOMB,(*this_sprite_x),(*this_sprite_y));
							
							getBonus++;
						}
						
					}
					
					// On détruit la balle + le tir !!	
					if ((*this_ball_type)!=BIG)
					{
						(*this_sprite_y)=INACTIF;							
					}
					else
					{
						if ((*this_ball_sprno)==13)
						{
							sprites[13].y = RESERVED;
							sprites[14].y = RESERVED;
							sprites[15].y = RESERVED;
							sprites[16].y = RESERVED;
						}
						else
						{
							sprites[17].y = RESERVED;
							sprites[18].y = RESERVED;
							sprites[19].y = RESERVED;
							sprites[20].y = RESERVED;
						}

					}
					
					(*this_ball_type)=INACTIF;
					nbBalls--;
					restoreBackGroundNmi=1;
					createObs(MAXOBS-1,NULL,0,0,0,0);
					break;
				}
				else // Elle touche une plateforme
				{
					if ((*this_obs_type)&HORIZONTAL)
					{
						// En descendant ?
						if ((*this_ball_vel)<0) 
						{
							(*this_ball_posy)=((*this_obs_y)-repos)<<4;
							
							(*this_ball_vel) = vel_cst; 
							if ((*this_obs_type)&VELDOWN)
							(*this_ball_vel) = (*this_ball_vel) >>2;
							else if ((*this_obs_type)&VELDOWNLESS)
							{
								(*this_ball_vel)-=64;
							}
							
						}	
						else	
						if ((*this_ball_vel)>0) {(*this_ball_posy) += (*this_ball_vel);(*this_ball_vel) = -(*this_ball_vel);	}
					}
					else
					{	
						if ((*this_ball_move)<0) 
						{
							(*this_ball_posx) = (*this_obs_x)+9;
						}
						else
						{
							(*this_ball_posx) = (*this_obs_x)-(lt+1);
						}
						(*this_ball_move) =- (*this_ball_move);
					}
					break;					
				}
			}
		}//else {put_char(0,0,255);}

		if ((*this_sprite_y)>176-ht+8/*-bs*/) (*this_ball_vel) = vel_cst; //(*this_ball_vel) = (*this_ball_vel_cst);
		else
		if ((*this_sprite_y)<8) {(*this_ball_vel)=-(*this_ball_vel);(*this_ball_posy)=128;}
		
		//if ((timer2&1)==0)
		if (doCheck==1)
		if (((*this_sprite_x)>(248-lt/*-bs*/)) || ((*this_sprite_x)<8) )(*this_ball_move)=-(*this_ball_move);

		// Collision avec le joueur
		//if ( (isCollision((*this_sprite_x)+4,(*this_sprite_y)+4,ht-4,lt-4,sprites[0].x+4,sprites[0].y+16,14,12)) && (freeze==0) )
		if ( (isCollision((*this_sprite_x)+4,(*this_sprite_y)+4,ht-4,lt-4,player.x+4,player.y+16,14,12)) && (freeze==0) )
		{
			//pause();
			if (invincible>0)
			{
				invincible = 100;
			}
			else
			{
				workflow = W_LOOSE_LIFE;
			}
		}
		
		if ( (*this_ball_type!=INACTIF) )
		{		
			if (freeze==0)
			{
				(*this_ball_posx) += (*this_ball_move);
				(*this_ball_posy) -= (*this_ball_vel);
				(*this_ball_vel) -= GRAV;
			}
			
			(*this_sprite_x) = (*this_ball_posx);
			(*this_sprite_y) = (*this_ball_posy)>>4;			
			if ((*this_ball_sprno)==13)
			{
				sprites[14].x = (*this_sprite_x) + 16;
				sprites[14].y = (*this_sprite_y);
				
				sprites[15].x = (*this_sprite_x);
				sprites[15].y = (*this_sprite_y) + 16;
				
				sprites[16].x = (*this_sprite_x) + 16;
				sprites[16].y = (*this_sprite_y) + 16;
			}
			else if ((*this_ball_sprno)==17)
			{
				sprites[18].x = (*this_sprite_x) + 16;
				sprites[18].y = (*this_sprite_y);
				
				sprites[19].x = (*this_sprite_x);
				sprites[19].y = (*this_sprite_y) + 16;
				
				sprites[20].x = (*this_sprite_x) + 16;
				sprites[20].y = (*this_sprite_y) + 16;
			}
		}


	}
}

void game_loop(void)
{
	byte nbball;
	byte move;
	byte engaged;
	byte col;	
	
	engaged = 0;
	nbball=0;
	move=1;
	timer =0;
	timer2=0;	
	while (workflow==W_INGAME)
	{	
		ticks=0;
		//delay0=0;		
		moveAllBalls();
		updateExplosion();
		//moveAllBonus();
		if ( (joypad_1&LEFT) && (sprites[0].x>10) && (c5<254))
		{
			player.x-=2;			
			move=1;

			if ((timer&3)==0)
			{
				currentAnim++;
				if (currentAnim>3) currentAnim=0;

				if (currentAnim==0)
				{
					sprites[0].pattern = (21<<2);
					sprites[1].pattern = (22<<2);
					sprites[2].pattern = (27<<2);
					sprites[3].pattern = (28<<2);															
				}
				else
				if ( (currentAnim==1) || (currentAnim==3) )
				{
					sprites[0].pattern = (23<<2);
					sprites[1].pattern = (24<<2);
					sprites[2].pattern = (29<<2);
					sprites[3].pattern = (30<<2);															
				}
				else if (currentAnim==2)
				{
					sprites[0].pattern = (25<<2);
					sprites[1].pattern = (26<<2);
					sprites[2].pattern = (31<<2);
					sprites[3].pattern = (32<<2);																			
				}
				
				
			}
			
		}
		else
		if ( (joypad_1&RIGHT) && (sprites[0].x<256-8-16) && (c4<254))
		{				
			player.x+=2;			
			move=1;

			if ((timer&3)==0)
			{
				currentAnim++;
				if (currentAnim>3) currentAnim=0;
				if (currentAnim==0)
				{
					sprites[0].pattern = (9<<2);
					sprites[1].pattern = (10<<2);
					sprites[2].pattern = (15<<2);
					sprites[3].pattern = (16<<2);															
				}
				else
				if ( (currentAnim==1) || (currentAnim==3) )
				{
					sprites[0].pattern = (11<<2);
					sprites[1].pattern = (12<<2);
					sprites[2].pattern = (17<<2);
					sprites[3].pattern = (18<<2);															
				}
				else if (currentAnim==2)
				{
					sprites[0].pattern = (13<<2);
					sprites[1].pattern = (14<<2);
					sprites[2].pattern = (19<<2);
					sprites[3].pattern = (20<<2);																			
				}
			}			
		}
		
		if (joypad_1&UP)
		{
			if ((c1==LADDER_LEFT) && (c2==LADDER_RIGHT))
			{
				player.x=((player.x+4)>>3)<<3;

			if ((timer&3)==0)
			{
				currentAnim++;
				if (currentAnim>3) currentAnim=0;
			}

				if ( (currentAnim==0) || (currentAnim==1) )
				{
					sprites[0].pattern = (35<<2);
					sprites[1].pattern = (36<<2);	
					sprites[2].pattern = (37<<2);
					sprites[3].pattern = (38<<2);	
				}
				else
				{
					sprites[0].pattern = (45<<2);
					sprites[1].pattern = (46<<2);	
					sprites[2].pattern = (47<<2);
					sprites[3].pattern = (48<<2);	
				}
				
				player.y-=2;
				move = 1;
			}
		}
		else
		if (joypad_1&DOWN)
		{
			
			if (((c3>246) && (c3<253)) && ((c3bis>246) && (c3bis<253)) )
			{	
				player.y+=2;
				move=1;

			if ((timer&3)==0)
			{
				currentAnim++;
				if (currentAnim>3) currentAnim=0;
			}

				if ( (currentAnim==0) || (currentAnim==1) )
				{
					sprites[0].pattern = (35<<2);
					sprites[1].pattern = (36<<2);	
					sprites[2].pattern = (37<<2);
					sprites[3].pattern = (38<<2);	
				}
				else
				{
					sprites[0].pattern = (45<<2);
					sprites[1].pattern = (46<<2);	
					sprites[2].pattern = (47<<2);
					sprites[3].pattern = (48<<2);	
				}				
			}
		}
		
		// Chute !!
		if ((c3<247) && (c3bis<247))
		{	
			player.y+=2;				
			move=1;
		}
		
		//if (delay0<16) delay(1);
		if (ticks==0) delay(1);
		if (((timer&3)==0) & (slowdown==1) /*&& (delay0<16)*/ ) delay(1); // 25% de vitesse en moins
		
		if (( (joypad_1&(FIRE1|FIRE2)))/*&& (i<16)*/ )
		{
			if (engaged==0)
			{
				engaged = 1;
				if (shoot.actif==0)
				{
					stop_sound(18);
					play_sound(18);
					shootNmi = 1;
				}
			}
		}
		else
		{
			engaged = 0;
		}
		
		//if (keypad_1==1) explodeAllBalls();		
		//if (keypad_1==2) invincible = 255;
		//if (keypad_1==3) nbBalls=0;
		
		timer++;
		if ((timer&1)==0) timer2++;
		if (move==1) {updatePlayerSprites();move=0;}
		
		if (freeze>0) freeze--;
		if ((invincible>0) && (invincible!=255)) invincible--;
		if (nbBalls==0) {workflow = W_NEXTLEVEL;delay(10);}
		
		if ((invincible>1) && ((timer&1)==0))
		{
			if ((timer&3)==0) col = 4;
			else
			if (invincible==255) col = 7; else col = 8;
			
			
			//if ((timer&3)==0)
			//{
				//sprites[2].colour=4;
				//sprites[3].colour=4;
			//}
			//else
			//{
				sprites[2].colour=col;
				sprites[3].colour=col;
			//}
		} 
		else
		if (invincible==1)
		{
			sprites[2].colour=15;
			sprites[3].colour=10;
		}
		
		
	}	
}

void doInit()
{
	byte i;
	for (i=0;i<MAXBONUS;i++) bonus[i].time=0;	
	for (i=0;i<32;i++) sprites[i].y = 204;	
	for (i=13;i<21;i++) sprites[i].y = RESERVED;
}

void initAll()
{
	byte i;
	
	doInit();
	//for (i=0;i<32;i++) sprites[i].y = 204;	
	//for (i=13;i<21;i++) sprites[i].y = RESERVED;	
	for (i=0;i<MAXBALL;i++) ball[i].type=INACTIF;
	for (i=0;i<MAXOBS;i++) obs[i].type=NULL;
	for (i=0;i<MAXBONUS;i++) {bonus[i].sprno=-1;bonus[i].car=0;bonus[i].time=0;}
	nbBalls=0;
}

void initLevel(byte l)
{
	byte *level;
	byte obs;
	byte offset;
	
	getBonus=0;
	freeze = 0;
	invincible=0;
	optimize=1;
	sprites[31].y=RESERVED;

	
	screen_off();
	disable_nmi();

	 
	if (currentFond==3) LoadPatternAndshowAScreenDan0(FOND5_PATTERNDAN0,FOND5_COLORDAN0,FOND5_NAMEDAN0,1,chrtab);
	else if (currentFond==2) LoadPatternAndshowAScreenDan0(FOND4_PATTERNDAN0,FOND4_COLORDAN0,FOND4_NAMEDAN0,1,chrtab);
	else if (currentFond==1) LoadPatternAndshowAScreenDan0(FOND2_PATTERNDAN0,FOND2_COLORDAN0,FOND2_NAMEDAN0,1,chrtab);
	else if (currentFond==0) LoadPatternAndshowAScreenDan0(FOND1_PATTERNDAN0,FOND1_COLORDAN0,FOND1_NAMEDAN0,1,chrtab);
	
	bidx = 0;
	obs=0;
	offset=0;
	level = levels_Pointer[l-1];
	//explosion.sprno=-1;
	
	while((*(level+offset))!=255)
	{	
		if ((*(level+offset))==CREATE_BALL)
		{
			createBall((*(level+offset+1)),(*(level+offset+2)),(*(level+offset+3)),(*(level+offset+4)));
			offset+=5;
		}
		else if (((*(level+offset)))==CREATE_HOBS)
		{
			createHobs(obs,(*(level+offset+1)),(*(level+offset+2)),(*(level+offset+3)),(*(level+offset+4)),(*(level+offset+5)));
			offset+=6;
			obs++;
		}
		else if ((*(level+offset))==CREATE_VOBS)
		{
			createVobs(obs,(*(level+offset+1)),(*(level+offset+2)),(*(level+offset+3)),(*(level+offset+4)),(*(level+offset+5)));
			offset+=6;
			obs++;
		}
		else if ((*(level+offset))==CREATE_LADDER)
		{
			createLadder((*(level+offset+1)),(*(level+offset+2)),(*(level+offset+3)));
			offset+=4;
		}
		else if ((*(level+offset))==PLAYER_START)
		{
			player.x = *(level+offset+1);
			player.y = *(level+offset+2);
			offset+=3;
		}
		else if ((*(level+offset))==OPTIMIZE)
		{
			optimize = *(level+offset+1);
			offset+=2;
		}

	}
	
	screen_on();
	enable_nmi();
}

void clsPartScreen(byte y,byte h,byte c)
{
	byte i,j;
	
	for (i=0;i<32;i++)
		for (j=y;j<y+h;j++)
			  put_char(i,j,c);	
}

void buffer2screen(byte sx,byte sy,byte h,byte l,byte dx,byte dy)
{
//				get_vram(buffer+((j<<5)+i),c,1);
//				put_vram(chrtab+(((j-5)<<5)+i),c,1);

	byte c[32];
	byte i;
	
	for (i=0;i<h;i++)
	{
		get_vram(buffer+((sy+i)<<5)+sx,c,l);
		put_vram(chrtab+((dy+i)<<5)+dx,c,l);
	}
}
			
void main(void)
{	
	byte i,j;
	byte c[2];
	char k,l;
	set_snd_table(snd_table);
	stop_music();
	delay(1);
	oddNmi = 0;
	timerNmi=0;
	restoreBackGroundNmi=0;
	workflow = W_TITLE;
	//check[0]=0;
	//check[1]=0;
	
	//screen_mode_2_text();
	screen_mode_2_bitmap();
	vdp_out(3,0x9f); /* Pour empécher des bugs de dédoublonnage de sprite ? */
	vdp_out(4,0x3);
	rle2vram(SPATTERNRLE,sprtab);
	player.hiscore = 0;
	slowdown=0;
	currentAnim=0;	
	
	
	while(1)
	{
		if (workflow==W_TITLE)
		{

			initAll();			
			screen_off();
			disable_nmi();			
			// On précharge le title dans le buffer
			LoadPatternAndshowAScreenDan0(WINPOSE1_PATTERNDAN0,WINPOSE1_COLORDAN0,WINPOSE1_NAMEDAN0,1,buffer);
			LoadPatternAndshowAScreenDan0(TITLE_PATTERNDAN0,TITLE_COLORDAN0,TITLE_NAMEDAN0,1,chrtab);
			fill_color(32,0,1);
			fill_color('A',0xf0,26);
			fill_color('1',0xf0,10);
			clsPartScreen(10,4,32);
			/*for (i=0;i<32;i++)
			 for (j=10;j<13;j++)
			  put_char(i,j,32);*/
			duplicate_pattern();
			center_string(10,"CODE & MUSIC");
			center_string(12,"M. LOUVET");
			center_string(15,"GFX");
			center_string(17,"JP. MEOLA        V. GODEFROY");
			center_string(20,"(C) 2012 COLLECTORVISION");
			screen_on();
			enable_nmi();
			pressAKey();
			screen_off();
			disable_nmi();
			clsPartScreen(10,10,32);			
			center_string(14,"PRESS FIRE TO PLAY");
			createBall(BIG,100,8,1);
			createBall(BIG,150,8,-1);
			enable_nmi();
			screen_on();
			i=0;
			timer = 0;
			timer2 = 0;
			while(i==0)
			{
				if (joypad_1&(FIRE1|FIRE2)) i=1;
				if (joypad_1&RIGHT) slowdown=1;
				if (joypad_1&LEFT) slowdown=0;
				delay(1);
				if (slowdown==0) center_string(16,"GAME SPEED 1");
				else if (slowdown==1) center_string(16,"GAME SPEED 2");
				moveAllBalls();
				timer++;
				if ((timer&1)==0) timer2++;
			}		
			currentLevel = 1;
			player.nblives = 2;
			player.score = 0;
			timer=0;
			timer2=0;
			currentFond = 0;
			currentWinPose = 0;
			workflow = W_INGAME;
		}
		if (workflow==W_INGAME)
		{
			initAll();
			
			player.x=128;
			player.y=192-30-8;			
			sprites[0].pattern=7<<2;sprites[2].pattern=33<<2;
			sprites[0].colour = 1;sprites[2].colour = 15;
			sprites[1].pattern=8<<2;sprites[3].pattern=34<<2;
			sprites[1].colour = 1;sprites[3].colour = 10;
			updatePlayerSprites();
			
			shoot.actif = 0;			
			i=0;			
			initLevel(currentLevel);			
			lastBallShoot = MICRO;
			multiplyer=1;
			stop_music();
			delay(1);
			if ((currentLevel&1)==0)play_music(music4); else play_music(music3);
			game_loop();
			while (shoot.actif) {}
		}	
		if (workflow==W_NEXTLEVEL)
		{
			stop_music();
			delay(1);
			/*
			for (i=0;i<MAXBONUS;i++) bonus[i].time=0;
			for (i=0;i<32;i++) sprites[i].y = 204;	
			for (i=13;i<21;i++) sprites[i].y = RESERVED;			*/
			doInit();
			screen_off();
			disable_nmi();
			

			LoadPatternAndshowAScreenDan0(WINPOSE1_PATTERNDAN0,WINPOSE1_COLORDAN0,WINPOSE1_NAMEDAN0,0,buffer);
			fill_vram(chrtab,0,32*24);
			// Recréation des niveaux
			// Carré
			buffer2screen(2,10,14,28,2,5);
			
			if (currentWinPose==0) buffer2screen(1,0,10,11,12,8);
			else if (currentWinPose==1) buffer2screen(12,0,10,9,12,8);
			else buffer2screen(21,0,10,11,10,8);
			
			currentWinPose++;
			if (currentWinPose>2) currentWinPose=0;
									
			// winpose1
			 // OK
			 //buffer2screen(1,0,10,11,12,8);
			 

			 // winpose2
			 // OK
			 //buffer2screen(12,0,10,9,12,8);
			 
			 // winpose 3
			 //buffer2screen(21,0,10,10,10,8);
			
			enable_nmi();			
			delay(1);
			screen_on();
			
			play_music(music);
			pressAKey();
			stop_music();
			delay(1);
			
				screen_off();
				disable_nmi();

				LoadPatternAndshowAScreenDan0(TITLE_PATTERNDAN0,TITLE_COLORDAN0,TITLE_NAMEDAN0,1,chrtab);

				/*for (i=0;i<32;i++)
				 for (j=0;j<24;j++) put_char(i,j,32);	*/
				clsPartScreen(0,24,32);				 
				fill_color(0,0xf0,254);	
				fill_color(32,0,1);
				//duplicate_pattern();
				center_string(5,"LEVEL :");
				center_string(6,str(currentLevel));
				center_string(8,"SCORE :");
				center_string(9,str(player.score));
				center_string(11,"NB LIFE :");
				center_string(12,str(player.nblives+1));
				enable_nmi();
				screen_on();
				pressAKey();
			
			
			
			currentLevel++;
			if (currentLevel>30) currentLevel=1;
			if ((currentLevel%4)==0) currentFond++;
			if (currentFond>3) currentFond=0;
			workflow=W_INGAME;
		}
		if (workflow==W_LOOSE_LIFE)
		{			
			stop_music();
			delay(1);
			for (i=0;i<MAXBONUS;i++) bonus[i].time=0;
			
			// Il faut faire une jolie animation là ...
			// A Updater quand on l'aura
			sprites[0].pattern=55<<2;sprites[2].pattern=57<<2;
			sprites[0].colour = 1;sprites[2].colour = 15;
			sprites[1].pattern=56<<2;sprites[3].pattern=58<<2;
			sprites[1].colour = 1;sprites[3].colour = 10;
			
			k=+2;			
			//for (j=0;j<3;j++)
			//{
				//l=-2;
				for (i=0;i<60;i++)
				{
					//if (i%9) l=2;
					player.x = player.x +=k;
					//player.y = player.y +=l;					
					if (player.x>256-16-8) k=-1;
					updatePlayerSprites();
					delay(1);
				}/*
				for (i=0;i<10;i++)
				{
					player.x = player.x +=k;
					player.y = player.y +=2;
					if (player.x>256-16-8) k=-k;
					updatePlayerSprites();
					delay(1);
				}*/
			//}			

			if (player.nblives>0) {player.nblives--;workflow = W_INGAME;}
			else workflow = W_GAME_OVER;									

			if (workflow!=W_GAME_OVER)
			{
				/*for (i=0;i<MAXBONUS;i++) bonus[i].time=0;				
				for (i=0;i<32;i++) sprites[i].y = 204;	
				for (i=13;i<21;i++) sprites[i].y = RESERVED;	*/
				doInit();				
				screen_off();
				disable_nmi();

				LoadPatternAndshowAScreenDan0(TITLE_PATTERNDAN0,TITLE_COLORDAN0,TITLE_NAMEDAN0,1,chrtab);

				/*for (i=0;i<32;i++)
				 for (j=0;j<24;j++) put_char(i,j,32);	*/
				clsPartScreen(0,24,32);				 
				fill_color(0,0xf0,254);	
				fill_color(32,0,1);
				//duplicate_pattern();
				center_string(5,"LEVEL :");
				center_string(6,str(currentLevel));
				center_string(8,"SCORE :");
				center_string(9,str(player.score));
				center_string(11,"NB LIFE :");
				center_string(12,str(player.nblives+1));
				enable_nmi();
				delay(1);
				screen_on();
				pressAKey();
			}						
		}
		if (workflow==W_GAME_OVER)
		{
			/*for (i=0;i<MAXBONUS;i++) bonus[i].time=0;	
			for (i=0;i<32;i++) sprites[i].y = 204;	
			for (i=13;i<21;i++) sprites[i].y = RESERVED;					*/
			doInit();
			screen_off();
			disable_nmi();
			
			LoadPatternAndshowAScreenDan0(TITLE_PATTERNDAN0,TITLE_COLORDAN0,TITLE_NAMEDAN0,1,chrtab);
			clsPartScreen(0,10,32);
			/*for (i=0;i<32;i++)
				for (j=0;j<10;j++) put_char(i,j,32);*/
			fill_color(32,0,1);
			center_string(16,"FINAL SCORE");
			center_string(17,str(player.score));
			center_string(19,"LEVEL");
			center_string(20,str(currentLevel));
			screen_on();
			enable_nmi();
			stop_music();
			delay(1);
			play_music(music2);
			pressAKey();
			stop_music();
			delay(1);
			workflow = W_TITLE;
		}
		
	}
}


void nmi()
{	
	byte c;
	char o;
	
	++ticks;
	update_music();
	moveAllBonus();
	
	
	
	if (oddNmi) {put_vram (0x1b00,sprites,128); oddNmi=0;}
	else 
	{
		memcpyb(bsprites,sprites+16,64);
		memcpyb(bsprites+16,sprites,64);
		put_vram (0x1b00,bsprites,128);	
		oddNmi=1;
	}
	
	if (shootNmi==1)
	{
		shootNmi=0;
		shoot.actif=1;
		shoot.x = (sprites[0].x + 8)>>3;
		get_bkgrnd(char_save,shoot.x,0,1,24);
		shoot.y = (sprites[1].y + 8)>>3;
		shoot.h = 0;
		if (shoot.y>23) shoot.y = 23;
		sprites[0].pattern = (7<<2);
		sprites[1].pattern = (8<<2);	
		sprites[2].pattern = (33<<2);
		sprites[3].pattern = (34<<2);	
	}

	if ((shoot.actif==1) && ((timerNmi&1)==0) && (restoreBackGroundNmi==0))
	{
		//c = get_char_protected(shoot.x,shoot.y);
		c = get_char(shoot.x,shoot.y);
		if (c<253) // On ne touche rien
		{
			
			//put_char_protected(shoot.x,shoot.y,253);
			put_char(shoot.x,shoot.y,253);
			shoot.h+=8;
			createObs(MAXOBS-1,TIR,shoot.x<<3,shoot.y<<3,shoot.h,8);
			shoot.y--;

			if (shoot.y==0)
			{
				createObs(MAXOBS-1,NULL,0,0,0,0);
				restoreBackGroundNmi=1;
			}
			
		}
		else
		{
			restoreBackGroundNmi=1;			
		}
	}
	
	if (restoreBackGroundNmi==1)
	{
		restoreBackGroundNmi=0;
		put_frame0(char_save,shoot.x,0,1,24);

		// TODO :
		// Si le tir à touche un caractère de plateforme BREAKABLE
		//c = get_char_protected(shoot.x,shoot.y);
		c = get_char(shoot.x,shoot.y);
		if (c==BREAKABLE) 
		{
			o = findObs(shoot.x,shoot.y);				
			if (o!=-1) destroyObs(o);
		}

		// SI L'ARME EST DE TYPE GLUE, NE PAS FAIRE CETTE PARTIE !!!
		createObs(MAXOBS-1,NULL,0,0,0,0);
		
		shoot.actif=0;
	}
	
	c1 = get_char((player.x+4)>>3,(player.y+27)>>3);
	c2 = get_char((player.x+12)>>3,(player.y+27)>>3);
	
	c3 = get_char((player.x+4)>>3,(player.y+28)>>3);
	c3bis = get_char((player.x+12)>>3,(player.y+28)>>3);
	
	c4 = get_char((player.x+16)>>3,(player.y+25)>>3);
	c5 = get_char((player.x-1)>>3,(player.y+25)>>3);
	/*
	if ((timerNmi&1)==0)
	{
		for (c=0;c<MAXBONUS;c++)
		{
			if (bonus[c].sprno==-1) continue;
			bonus[c].car = get_char((sprites[bonus[c].sprno].x+8)>>3,(sprites[bonus[c].sprno].y+16)>>3);
		}
	}*/
	
	//put_char(0,0,c1);
	//put_char(1,0,c2);
	//put_char(0,1,c3); 
	
	timerNmi++;
}


