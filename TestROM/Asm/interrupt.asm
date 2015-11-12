;-----------------------------------
; This is an 'NES' test program.
; Assembler is DASM.exe
; Date 2014/02/20 Thursday 21:49
;
; NES_DEV is a cross-platform, portable, and hand-held NES emulator.
;
; Copyright (C) 2015  Vahid Heidari (DeltaCode)
;
; This program is free software: you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation, either version 3 of the License, or
; (at your option) any later version.
;
; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.
; 
; You should have received a copy of the GNU General Public License
; along with this program.  If not, see <http://www.gnu.org/licenses/>.
;
;-----------------------------------

; NMI routines executes every frame.
NMI_ROUTINE:
	PPU_SET_SCROLL_XY 0,0
	rti

; IRQ routione
; Do nothing just for now!
IRQ_ROUTINE:
	rti

	; Vector table
.segment "VECTORS"
	.word 0
	.word 0
	.word 0
	.word NMI_ROUTINE		; NMI routine
	.word MAIN				; Main entry point
	.word IRQ_ROUTINE		; IRQ routin
