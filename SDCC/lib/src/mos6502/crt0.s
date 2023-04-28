;--------------------------------------------------------------------------
;  crt0.s - Generic crt0.s for a bare metal 6502
;
;  Copyright (C) 2021-2022, Gabriele Gorla
;
;  This library is free software; you can redistribute it and/or modify it
;  under the terms of the GNU General Public License as published by the
;  Free Software Foundation; either version 2, or (at your option) any
;  later version.
;
;  This library is distributed in the hope that it will be useful,
;  but WITHOUT ANY WARRANTY; without even the implied warranty of
;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
;  GNU General Public License for more details.
;
;  You should have received a copy of the GNU General Public License
;  along with this library; see the file COPYING. If not, write to the
;  Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
;   MA 02110-1301, USA.
;
;  As a special exception, if you link this library with other files,
;  some of which are compiled with SDCC, to produce an executable,
;  this library does not by itself cause the resulting executable to
;  be covered by the GNU General Public License. This exception does
;  not however invalidate any other reasons why the executable file
;   might be covered by the GNU General Public License.
;--------------------------------------------------------------------------

	.module crt0

	;; Ordering of segments for the linker.
        .area _CODE
        .area GSINIT
        .area GSFINAL
        .area CODE
        .area RODATA
        .area XINIT

        .area ZP      (PAG)
        .area OSEG    (PAG, OVR)

	.area _DATA
        .area DATA
        .area BSS

	;; Reset/interrupt vectors
        .area   CODEIVT (ABS)
        .org    0xfffa
	.dw	__sdcc_gs_init_startup ; NMI
	.dw	__sdcc_gs_init_startup ; RESET
	.dw	__sdcc_gs_init_startup ; IRQ/BRK

        .area GSINIT
__sdcc_gs_init_startup:
        ldx     #0xff
        txs
;        ldx     #0x01         ; MSB of stack ptr
;        stx     __BASEPTR+1

__sdcc_init_data:
;; initialize DATA
        lda #<s_XINIT
        sta ___memcpy_PARM_2
        lda #>s_XINIT
        sta ___memcpy_PARM_2+1
        lda #<l_XINIT
        sta ___memcpy_PARM_3
        lda #>l_XINIT
        sta ___memcpy_PARM_3+1
        lda #<s_DATA
        ldx #>s_DATA
        jsr ___memcpy

;; clear BSS
        lda #0x00
        sta _memset_PARM_2
        lda #<l_BSS
        sta _memset_PARM_3
        lda #>l_BSS
        sta _memset_PARM_3+1
        lda #<s_BSS
        ldx #>s_BSS
        jsr _memset

        .area GSFINAL
__sdcc_program_startup:
        jsr     _main
        jmp     .

