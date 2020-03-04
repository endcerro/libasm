strcmp:
    	mov ecx,-1    		              	;set ecx to 0 (iterator)
    	strcmp_loop:
    		inc ecx							;increm offset
    		cmp byte [eax+ecx],[ebx+ecx]  	;comp eax + ebx (str + len)
    		je strcmp_loop					;redo if same
    	strcmp_end:
    		inc 