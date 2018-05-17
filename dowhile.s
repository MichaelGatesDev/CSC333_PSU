	.file	"dowhile.c"
	.text
	.globl	pcount_do
	.type	pcount_do, @function
pcount_do:
.LFB41:
	.cfi_startproc
	movl	$0, %eax
.L2:
	movl	%edi, %edx
	andl	$1, %edx
	addl	%edx, %eax
	shrl	%edi
	jne	.L2
	rep ret
	.cfi_endproc
.LFE41:
	.size	pcount_do, .-pcount_do
	.globl	pcount_while
	.type	pcount_while, @function
pcount_while:
.LFB42:
	.cfi_startproc
	movl	%edi, %eax
	andl	$1, %eax
	testl	%edi, %edi
	je	.L4
.L6:
	movl	%edi, %edx
	andl	$1, %edx
	addl	%edx, %eax
	shrl	%edi
	jne	.L6
.L4:
	rep ret
	.cfi_endproc
.LFE42:
	.size	pcount_while, .-pcount_while
	.globl	pcount_for
	.type	pcount_for, @function
pcount_for:
.LFB43:
	.cfi_startproc
	testl	%edi, %edi
	je	.L11
	movl	$0, %eax
.L10:
	movl	%edi, %edx
	andl	$1, %edx
	addl	%edx, %eax
	shrl	%edi
	jne	.L10
	rep ret
.L11:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE43:
	.size	pcount_for, .-pcount_for
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC0:
	.string	"\n\tThere are %d one's in 0X%X\n\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB44:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$1048575, %edi
	call	pcount_for
	movl	$1048575, %ecx
	movl	%eax, %edx
	leaq	.LC0(%rip), %rsi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk@PLT
	movl	$0, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE44:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
