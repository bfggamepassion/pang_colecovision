path c:\sdcc\bin
@echo off
sdcc -mz80 -c --std-c99 --opt-code-speed charset.c
del charset.lst
del charset.sym
del charset.asm
sdasz80 -o fond1.rel fond1.s
sdasz80 -o fond2.rel fond2.s
sdasz80 -o fond4.rel fond4.s
sdasz80 -o fond5.rel fond5.s
sdcc -mz80 -c --std-c99 --opt-code-speed levels.c
del levels.lst
del levels.sym
del levels.asm
sdcc -mz80 -c --std-c99 --opt-code-speed main.c
del main.lst
del main.sym
del main.asm
sdasz80 -o music.rel music.s
sdasz80 -o title.rel title.s
sdasz80 -o winpose1.rel winpose1.s
pause
