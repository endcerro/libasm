section .text
	global      ft_write
	extern 		__errno_location
;write(edi, esi, edx)
ft_write:
	
	xor 	rbx, rbx
	xor 	ebx, ebx
	mov     ebx, edi        ;file descriptor (stdout) in EBX
;	cmp		ebx, 0			;Check if file descriptor is < 0
;	jl 		testret 		;Go there if this is the case

	xor 	r8, r8
	xor 	r8d, r8d
	mov 	r8d, edx			;Copying bytes to write in r8
	mov 	rax, -14
	cmp 	r8d, 0				;Check if bytes to write < 0
	jl		exit_error				;Go there if case


;	cmp		esi, 0				;Test if ptr = 0
;   jle		testret				;Go there if case
    						
    ;fd -> ebx / char * -> esi / nbb -> edx && r8d

    xor	ecx, ecx				;Char *slot reset
    mov ecx, esi				;Copying into param slot


print :
	mov     eax,4           ;system call number (sys_write)
    ; syscall
    int     0x80            ;call kernel
	cmp 	rax, 0
	jl 		exit_error
	;jc		exit_error
	; xor 	rax, rax
	;xor rcx, rcx
	;mov ecx, eax
	;neg rcx
	;call __errno_location
	
	;mov [rax], rcx
	;mov eax, ecx
	mov 	eax, r8d		;Return value
	ret

exit_error:
	xor rcx, rcx
	mov ecx, eax
	neg rcx
	call __errno_location
	
	mov [rax], rcx
	mov eax, ecx



; 	; xor rax, rax
; 	; xor rbx, rbx
; 	; xor rcx, rcx
	; call __errno_location
; 	; mov rdx, [rax]
; 	xor rax, rax
; 	; mov rax, 0xfffffffe		;Set to -1
; 	; mov rax, rdx
; 	mov rax, 42
; 	ret
testret :
	xor rdi, rdi
	; call __errno_location
	xor rax, rax
	mov rax, -1
	ret