	.file	"arrayq.c"
	.text
	.globl	copy_array
	.type	copy_array, @function
copy_array:
.LFB23:
	.cfi_startproc
	movslq	%edi, %rdi			# x into rdi
	movslq	%esi, %rax			# y into rax
	leaq	(%rax,%rax,8), %rdx	# 2y+8 into rdx
	addq	%rdi, %rdx			# (x + ((2y)*8)) into %rdx
	movq	%rdi, %rsi			#  x into %rsi
	salq	$4, %rsi			# x << 4 into %rsi
	subq	%rdi, %rsi			# y - (x << 4) into %rsi
	addq	%rax, %rsi			# y + (y - (x << 4))
	leaq	array1(%rip), %rax	# 
	movl	(%rax,%rsi,4), %ecx # %eax = %rax * 4
	leaq	array2(%rip), %rax	# %rip = %rax
	movl	%ecx, (%rax,%rdx,4) # 2*(%rdx)*4 = %ecx
	ret
	.cfi_endproc
.LFE23:
	.size	copy_array, .-copy_array
	.globl	main
	.type	main, @function
main:
.LFB24:
	.cfi_startproc
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	main, .-main
	.comm	array2,540,32
	.comm	array1,540,32
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
