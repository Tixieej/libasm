extern		_ft_strlen
extern		_ft_strcpy
extern		_malloc
global		_ft_strdup

section		.text
_ft_strdup:
	call	_ft_strlen			; put len of rdi in rax
	call	_malloc				;
	call	_ft_strcpy

; there must be a syscall kind of thing that you can put a number in,
; so that you can allocate that many bytes
; put the pointer to that in rax and return

; char * strdup(char *s1)
; strdup allocates sufficient memory for a copy of the string s1, does the copy and returns a pointer to it.
; if insufficient memory is available, null is returned and errno is set to ENOMEM	
