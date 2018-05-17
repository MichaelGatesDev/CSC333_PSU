	.file	"arrayswap.c"
	.text
	.globl	swap_a
	.type	swap_a, @function
swap_a:
.LFB0:
	.cfi_startproc
	subq	$40, %rsp
	.cfi_def_cfa_offset 48
	movq	%fs:40, %rax
	movq	%rax, 24(%rsp)
	xorl	%eax, %eax
	movq	(%rdi), %rax
	movq	%rax, (%rsp)
	movq	(%rsi), %rax
	movq	%rax, 8(%rsp)
	movq	8(%rsp), %rax
	movq	%rax, (%rdi)
	movq	(%rsp), %rax
	movq	%rax, (%rsi)
	movq	24(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L4
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L4:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE0:
	.size	swap_a, .-swap_a
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
