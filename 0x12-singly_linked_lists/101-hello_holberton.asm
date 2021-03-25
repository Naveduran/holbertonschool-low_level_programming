	.file	"example.c"
	.section	.rodata
.LC0:
	.string	"H"
.LC1:
	.string	"e"
.LC2:
	.string	"l"
.LC3:
	.string	"o"
.LC4:
	.string	","
.LC5:
	.string	"b"
.LC6:
	.string	"r"
.LC7:
	.string	"t"
.LC8:
	.string	"n"
.LC9:
	.string	"\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, %edx
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC1, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC2, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC2, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC3, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC4, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC3, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC2, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC5, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC1, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC6, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC7, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC3, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC8, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$1, %edx
	movl	$.LC9, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
