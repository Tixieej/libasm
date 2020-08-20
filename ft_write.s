extern		___error
global		_ft_write

section		.text
_ft_write:
	mov		rax, 0x2000004	; system call number (sys_write)
	syscall					; call kernel (put error in rax)
	jc		if_err			; if error, jump to if_err
	ret	

if_err:
	push	rax				; push error to stack
	call	___error		; put pointer of errno in rax
	pop		r11				; pop error number in r11
	mov		qword[rax], r11	; put error number in errno
	mov		rax, -1			; set rax to -1
	ret						; return rax
