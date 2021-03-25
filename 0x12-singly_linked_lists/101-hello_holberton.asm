section .text
	    global _start
section .data
	msg db  'Hello, Holberton',0xa
	len equ $ - msg
section .text
_start:
	mov edx,len
	mov ecx,msg
	mov ebx,1  	;file descriptor (stdout)
	mov eax,4	;system call number (sys_write)
	int 0x80    	;call kernel
