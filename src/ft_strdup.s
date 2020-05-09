section .text
	global ft_strdup
	extern malloc
	extern ft_strlen
	extern ft_strcpy

ft_strdup:
	
	xor r8, r8		;Clear r8 (cache)
	xor rax, rax	;Clear rax
	call ft_strlen	;Get size of str
	inc rax			;Add one for the \0
	mov r8, rdi		;Put str in cache
	xor rdi, rdi
	mov rdi, rax	;Put len in arg1 slot
	call malloc		;Malloc of the size, addr in rax
	xor rdi, rdi	;reset just in case
	xor rsi, rsi	;reset just in case
	mov rdi, rax	;Allocated space in first slot adddr
	mov rsi, r8		;Str to dup
	call ft_strcpy	;Copy
	ret 			;Done
