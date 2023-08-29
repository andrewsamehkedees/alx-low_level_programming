;Declare needed C  functions
        extern	printf			; the C function

        section .data			; Data section, initialized variables
msg:	db "Hello, Holberton", 0	; C string needs 0
fmt:    db "%s", 10, 0          	; The printf format

        section .text           	; Code section.

        global main			; gcc entry point
main:					; the program label 
        push    rbp			; set up stack frame
	
	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0			; rax
        call    printf			; Call C function

	pop	rbp			; restore stack

	mov	rax,0			; return value
	ret				; return
