global		_ft_strcpy

section		.text
_ft_strcpy:
	mov		rax, 0					; set rax to 0
loop:
	cmp		byte[rsi+rax], 0		; compare char rax of s2 with 0
	jne		cpy_rsi					; if not equal, jump to cpy_rsi
	mov		byte[rdi+rax], 0		; else add 0 at end of s1
	mov		rax, rdi				; move s1 pointer to rax
	ret								; return rax

cpy_rsi:
	mov		r11b, byte[rsi+rax]		; copy char from s2 in r11
	mov		byte[rdi+rax], r11b		; copy char from r11 in s1
	add		rax, 1					; rax + 1
	jmp		loop					; go back to loop
