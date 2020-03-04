section .text
  global  ft_strlen
; delete RAX

ft_strlen:
      xor   rax, rax            ; set return regis to 0
      jmp   compare             ; goto compare
increment:
      inc   rax                 ; i++
compare:
      cmp   BYTE [rdi + rax], 0 ; str[i] == 0
      jne   increment           ; jmp if not equal
done:
      ret             ; return i