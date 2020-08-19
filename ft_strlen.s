global		_ft_strlen

section		.text
_ft_strlen:
	mov		rax, 0				; rax = 0
loop:
	cmp		byte[rdi+rax], 0	; compare ptr+rax with 0
	jne		inc_rax				; if not equal, jump to inc_rax
	ret							; if equal, return rax

inc_rax:
	add		rax, 1				; rax + 1
	jmp		loop				; go back to loop
