section .text
	global	ft_strlen

ft_strlen:
	xor	rax, rax			;iterator/return to 0
	cmp	rdi, 0
	je	done
	jmp	compare				;goto compare
increment:
	inc	rax					; i++
compare:
	cmp	BYTE [rdi + rax], 0	; str[i] == 0
	jne	increment			; jmp if not equal
done:
	ret						; return i
