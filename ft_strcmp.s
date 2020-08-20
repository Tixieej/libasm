global		_ft_strcmp

section		.text
_ft_strcmp:
	mov		rax, -1					; set rax to -1
	mov		r11, 0					; set r11 to 0
loop:
	inc		rax						; rax + 1
	mov		r11b, byte[rdi+rax]		; char rax of 2nd arg in r11
	cmp		r11b, 0					; if char = 0
	je		calc_diff				; jump to calc_diff
	cmp		r11b, byte[rsi+rax]		; if char of 2nd = char of 1st 
	je		loop					; jump to start of loop
	jmp		calc_diff				; else jump to calc_diff

calc_diff:
	mov		r12b, byte[rsi+rax]		; char rax of 1st arg in r12
	sub		r11, r12				; r11 = r11 - r12
	mov		rax, r11				; put r11 in rax
	ret								; return rax

