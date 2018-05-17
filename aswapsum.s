	.file	"aswapsum.c"
	.text
	.globl	swap_ele_su
	.type	swap_ele_su, @function
swap_ele_su:
.LFB0:
	.cfi_startproc
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	subq	$8, %rsp
	.cfi_def_cfa_offset 48
	movq	%rdi, %rbp
	movslq	%esi, %rsi
	leaq	8(,%rsi,8), %rbx
	leaq	(%rdi,%rbx), %r12
	leaq	-8(%rdi,%rbx), %r13
	movq	%r12, %rsi
	movq	%r13, %rdi
	movl	$0, %eax
	call	swap@PLT
	movq	0(%r13), %rax
	imulq	(%r12), %rax
	addq	sum(%rip), %rax
	movq	%rax, sum(%rip)
	movq	%rax, -16(%rbp,%rbx)
	addq	$8, %rsp
	.cfi_def_cfa_offset 40
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	swap_ele_su, .-swap_ele_su
	.globl	sum
	.bss
	.align 8
	.type	sum, @object
	.size	sum, 8
sum:
	.zero	8
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
