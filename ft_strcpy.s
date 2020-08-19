global		_ft_strcpy

section		.text
_ft_strcpy:
	mov		rax, 0					; set rax to 0
loop:
	cmp		byte[rsi+rax], 0		; compare char rax of 2nd arg with 0
	jne		cpy_rsi					; if not equal, jump to cpy_rsi
	mov		byte[rdi+rax], 0
	mov		rax, rdi				; if equal, move 1st arg pointer to rax
	ret								; return rax

cpy_rsi:
	mov		r11b, byte[rsi+rax]		; put char from 2nd arg in 1st arg
	mov		byte[rdi+rax], r11b
	add		rax, 1					; rax + 1
	jmp		loop					; go back to loop

