global		_ft_strcmp

section		.text
_ft_strcmp:
	mov		rax, -1					; set rax to -1
	mov		r11, 0
loop:
	inc		rax
	mov		r11b, byte[rdi+rax]		; rdi+0 = 'a', rdi+1 = 'b'
	cmp		r11b, 0
	je		calc_diff
	cmp		r11b, byte[rsi+rax]
	je		loop
	jmp		calc_diff

calc_diff:
	mov		r12b, byte[rsi+rax]
	sub		r11, r12			; this line has to change
	mov		rax, r11
	ret

