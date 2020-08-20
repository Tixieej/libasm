extern		_ft_strlen
extern		_ft_strcpy
extern		_malloc
global		_ft_strdup

section		.text
_ft_strdup:
	push	rdi					; align stack
	call	_ft_strlen			; put len of rdi in rax
	mov		rdi, rax			; put rax in rdi
	call	_malloc				; put ptr in rax
	cmp		rax, 0				; if return is null
	je		no_mem				; jump to no_mem
	mov		rdi, rax			; put rax in rdi
	pop		rsi					; pop string to 2nd arg
	push	r11					; align stack
	call	_ft_strcpy			; copy rsi to rax and rdi
	pop		r11					; pop to empty stack
	ret							; return rax

no_mem:
	ret							; return rax
