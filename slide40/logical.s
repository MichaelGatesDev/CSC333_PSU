	.file	"logical.c"
	.text
	.globl	logical
	.type	logical, @function
logical:
.LFB0:
	.cfi_startproc
	movl	%edi, %eax
	xorl	%esi, %eax
	sarl	$17, %eax
	andl	$8185, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	logical, .-logical
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
