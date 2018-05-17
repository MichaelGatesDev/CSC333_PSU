	.file	"ch3n60.c"
	.text
	.globl	store_ele
	.type	store_ele, @function
store_ele:
.LFB23:
	.cfi_startproc
	movslq	%edx, %rdx
	movslq	%edi, %rdi
	movslq	%esi, %rsi
	leaq	(%rdi,%rdi,2), %rax
	movq	%rax, %rdi
	salq	$5, %rdi
	addq	%rdi, %rax
	leaq	(%rsi,%rsi,4), %rdi
	leaq	(%rsi,%rdi,2), %rsi
	addq	%rsi, %rax
	addq	%rdx, %rax
	leaq	A(%rip), %rdx
	movl	(%rdx,%rax,4), %eax
	movl	%eax, (%rcx)
	movl	$7920, %eax
	ret
	.cfi_endproc
.LFE23:
	.size	store_ele, .-store_ele
	.comm	A,7920,32
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
