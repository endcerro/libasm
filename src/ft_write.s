section     .text
global      ft_write                              ;must be declared for linker (ld)

ft_write:                                         ;tell linker entry point

	mov 	ecx, esi	;Copying message to write 
	mov     ebx, edi                               ;file descriptor (stdout)
    	mov     eax,4                               ;system call number (sys_write)
    	int     0x80                                ;call kernel
	ret


