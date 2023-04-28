;-------------------------------------------------------------------------
;   _mulint.s - routine for multiplication of 16 bit (unsigned) int
;
;   Copyright (C) 2009, Ullrich von Bassewitz
;   Copyright (C) 2022, Gabriele Gorla
;
;   This library is free software; you can redistribute it and/or modify it
;   under the terms of the GNU General Public License as published by the
;   Free Software Foundation; either version 2, or (at your option) any
;   later version.
;
;   This library is distributed in the hope that it will be useful,
;   but WITHOUT ANY WARRANTY; without even the implied warranty of
;   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;   GNU General Public License for more details.
;
;   You should have received a copy of the GNU General Public License
;   along with this library; see the file COPYING. If not, write to the
;   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
;   MA 02110-1301, USA.
;
;   As a special exception, if you link this library with other files,
;   some of which are compiled with SDCC, to produce an executable,
;   this library does not by itself cause the resulting executable to
;   be covered by the GNU General Public License. This exception does
;   not however invalidate any other reasons why the executable file
;   might be covered by the GNU General Public License.
;-------------------------------------------------------------------------

	.module _mulint

;--------------------------------------------------------
; exported symbols
;--------------------------------------------------------
	.globl __mulint_PARM_2
	.globl __mulint

;--------------------------------------------------------
; overlayable items in zero page
;--------------------------------------------------------
	.area	OSEG    (PAG, OVR)
_mulint_tmp:
	.ds 1

;--------------------------------------------------------
; function parameters
;--------------------------------------------------------
	.area BSS
__mulint_PARM_2:
	.ds 2

;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CODE

__mulint:
	sta	*___SDCC_m6502_ret0
	stx	*___SDCC_m6502_ret1

	lda	#0
	sta	*_mulint_tmp
	ldy	#16

	lsr	*___SDCC_m6502_ret1
	ror	*___SDCC_m6502_ret0
next_bit:
	bcc	skip
	clc
	adc	__mulint_PARM_2+0
	tax
	lda	__mulint_PARM_2+1
	adc	*_mulint_tmp
	sta	*_mulint_tmp
	txa
skip:
	ror	*_mulint_tmp
	ror	a
	ror	*___SDCC_m6502_ret1
	ror	*___SDCC_m6502_ret0
	dey
	bne	next_bit

	lda	*___SDCC_m6502_ret0
	ldx	*___SDCC_m6502_ret1
	rts
