section     .text
	global      ft_write
	extern ___error
ft_write:
	mov 	r8, rdx		;tell linker entry point
	mov 	ecx, esi	;Copying message to write 
	cmp	edi, 0
	jl	exit_error	
	cmp	esi, 0	
	mov     ebx, edi        ;file descriptor (stdout)
    	cmp	esi, 0
	je	exit_error
	jl	exit_error
	
print :
	mov     eax,4           ;system call number (sys_write)
    	int     0x80            ;call kernel
	jc	exit_error
	mov 	rax, r8		;Return value
	ret

exit_error:
	mov rax, -1
	ret
