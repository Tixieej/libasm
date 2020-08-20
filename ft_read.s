extern		___error
global		_ft_read

section		.text
_ft_read:
	mov		rax, 0x2000003		; system call sys_read
	syscall						; call kernel (put error in rax)
	jc		if_err				; if error, jump to if_err
	ret

if_err:
	push	rax					; push error to stack
	call	___error			; put pointer of errno in rax
	pop		r11					; pop error number in r11
	mov		qword[rax], r11		; put error number in errno
	mov		rax, -1				; set rax to -1
	ret							; return rax
