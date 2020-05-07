section .text
	global ft_strcmp
;rdi and rsi are params, rax is return
;pos ret if first param is greater
ft_strcmp:
	xor	rax, rax		;rax to 0
	xor 	rcx, rcx		;rcx to 0
	xor 	rbx, rbx		;rbx to 0
	xor 	rdx, rdx		;rdx to 0
	xor 	al, al
	xor 	ah, ah
	jmp 	check_null		;Check if null pointers

check_null:
	cmp	rdi, 0 			;Check if first param is null
	jz	null_p
	cmp 	rsi, 0
	jz 	null_p 			;Check if second param is null
	jmp 	compare

increment:
	inc 	rdx			;Increment iterator

compare:
	mov 	al, BYTE[rdi + rdx] 	;Stocking the char of str1 in al
	mov	ah, BYTE[rsi + rdx] 	;Stocking the char of str2 in al
	cmp 	al, ah			;Comparing them
	jg	greater			;p1 > p2
	jl	lower			;p2 > 2
	cmp 	BYTE[rdi + rdx], 0	;Are we at the end ?
	jz	equal			;If we are
	jmp 	increment		;Increment

null_p:
	cmp 	rsi, rdi		;Comparing two params
	jz	equal
	jg 	greater
	jmp	lower

greater :
	sub al, ah
	and ax, 0ffh	
	ret
lower:
	sub al, ah
	mov bl, al
	;mov ah, 255
	;mov rax, -1
	;and rax, 0ffh 
	mov rax, 0xffffffff
	;xor rax, rax
	;xor rax, rax
	mov al, bl	
	ret
equal:
	mov rax, 0
	ret
