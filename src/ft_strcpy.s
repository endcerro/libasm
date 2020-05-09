section .text
	global ft_strcpy
ft_strcpy : 
	mov rcx, -1	
	jmp check_null

null_p :
	mov rax, rdi
	ret

check_null:
	cmp	rdi, 0
	jz	null_p
	cmp	rsi, 0
	jz	null_p
	jmp	copy
copy :
	inc 	rcx
	mov		al, BYTE[rsi + rcx] 	;Copy in cache
	mov 	BYTE[rdi + rcx], al 	;Copy from cache
	jmp 	check_end	

check_end :
	cmp BYTE[rsi + rcx], 0
	jnz copy;
	mov rax, rdi
	ret
