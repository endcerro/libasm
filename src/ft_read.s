section .text
	global      ft_read
	extern		ft_strlen
	extern 		__errno_location
;write(edi, esi, edx)
ft_read:
	
	xor 	rbx, rbx
	xor 	ebx, ebx
	xor 	r8, r8


	mov     ebx, edi        	;File descriptor (stdout) in EBX
	mov 	r8d, edx			;Copying bytes to write in r8
	mov 	rax, -14			;Prep errno
	cmp 	r8d, 0				;Check if bytes to write < 0
	jl		exit_error			;Go there if case

    xor	ecx, ecx				;Char *slot reset
    mov ecx, esi				;Copying into param slot

read :
	mov     eax,3           ;system call number (sys_write)
    int     0x80            ;call kernel
	cmp 	rax, 0			;Check if write return is neg (error)
	jl 		exit_error		
	ret

exit_error:
	xor rcx, rcx			;Reset rcx
	mov ecx, eax			;Copy 
	neg rcx					;Invert (neg error code)
	call __errno_location	;Get errno location 
	mov [rax], rcx			;Put code at location
	mov rax, -1				;Put -1 in function return
	ret 					