	.file	"ch3n54.c"
	.text
	.globl	decode2
	.type	decode2, @function
decode2:
.LFB0:
	.cfi_startproc
	subl	%edx, %esi
	movl	%esi, %eax
	sarl	$31, %eax
	imull	%edi, %esi
	xorl	%esi, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	decode2, .-decode2
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
