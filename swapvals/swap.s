	.file	"swap.c"
	.text
	.p2align 4,,15
	.globl	swap
	.type	swap, @function
swap:
.LFB0:
	.cfi_startproc
	movq	bufp0(%rip), %rax
	movl	4+buf(%rip), %ecx
	movl	(%rax), %edx
	movl	%ecx, (%rax)
	movl	%edx, 4+buf(%rip)
	ret
	.cfi_endproc
.LFE0:
	.size	swap, .-swap
	.globl	bufp0
	.section	.data.rel,"aw",@progbits
	.align 8
	.type	bufp0, @object
	.size	bufp0, 8
bufp0:
	.quad	buf
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
