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
	sub		r11b, byte[rsi+rax]
	mov		rax, r11
	ret

;int	strcmp(char *s1, char *s2); return int = s1-s2

;	while (s1[i] == s2[i] && s2[i] != '\0')
;	{
;		i++;
;	}
;	return (s1[i] - s2[i]);

;als s1[i] = s2[i], spring naar andere cmp
;als s1[i] != 0, doe i++ en spring terug naar loop

;of 

;als s1[i] != 0, spring naar andere cmp
; anders: return s1-s2
;als s1[i] == s2[i], spring terug naar loop
; anders: return s1-s2
