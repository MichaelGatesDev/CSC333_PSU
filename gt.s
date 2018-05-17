	.file	"gt.c"
	.text
	.globl	gt
	.type	gt, @function
gt:
.LFB0:
	.cfi_startproc
	cmpl	%esi, %edi
	setg	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	gt, .-gt
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
