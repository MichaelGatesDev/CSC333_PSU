	.file	"main.c"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC0:
	.string	"\nbuf[0] = %d and buf[1] = %d\n\n"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC1:
	.string	"After swap"
.LC2:
	.string	"buf[0] = %d and buf[1] = %d\n\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB41:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	4+buf(%rip), %ecx
	movl	buf(%rip), %edx
	leaq	.LC0(%rip), %rsi
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk@PLT
	xorl	%eax, %eax
	call	swap@PLT
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	movl	4+buf(%rip), %ecx
	movl	buf(%rip), %edx
	leaq	.LC2(%rip), %rsi
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE41:
	.size	main, .-main
	.globl	buf
	.data
	.align 8
	.type	buf, @object
	.size	buf, 8
buf:
	.long	1
	.long	2
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
