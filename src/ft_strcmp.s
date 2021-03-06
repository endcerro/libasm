section .text
	global ft_strcmp

ft_strcmp:
	xor	rax, rax			;rax to 0
	xor	rbx, rbx			;rbx to 0
	xor	rdx, rdx			;rdx to 0
	xor	al, al
	xor	ah, ah
	jmp	check_null			;Check if null pointers

check_null:
	cmp	rdi, 0				;Check if first param is null
	jz	null_p
	cmp	rsi, 0
	jz	null_p				;Check if second param is null
	jmp	reset

increment:
	inc	rdx					;Increment iterator

reset:
	xor	rax, rax
compare:
	mov	al, BYTE[rdi + rdx] ;Stocking the char of str1 in al
	mov	ah, BYTE[rsi + rdx] ;Stocking the char of str2 in al
	cmp	al, ah				;Comparing them
	jl	lower				;p2 > 2
	jg	greater				;p1 > p2
	cmp	BYTE[rdi + rdx], 0	;Are we at the end ?
	jz	equal				;If we are
	jmp	increment			;Increment

null_p:
	cmp	rsi, rdi			;Comparing two params
	jz	equal				;If equal
	jg 	greater				;If greater
	jmp	lower				;If lower

greater :
	sub	al, ah				;Substract
	mov	ah, 0				;Clear 
	ret						;Return
lower:
	sub	al, ah				;Substract
	mov	bl, al				;Copy into temp
	mov	rax, 0xffffffff		;Set to -1
	mov	al, bl				;Copy temp into lower register
	ret						;Return
equal:
	mov	rax, 0				;Set to 0	
	ret						;Return
