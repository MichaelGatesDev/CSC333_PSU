long sum = 0;

void swap_ele_su(long a[], int i)
{
    swap(&a[i], &a[i+1]);
    sum += (a[i] * a[i+1]);
    a[i-1] = sum;
}

/*
    .file	"aswapsum.c"
    .text
    .globl	swap_ele_su
    .type	swap_ele_su, @function
    swap_ele_su:
    .LFB0:
    .cfi_startproc
    pushq	%rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    pushq	%rbx
    .cfi_def_cfa_offset 24
    .cfi_offset 3, -24
    subq	$8, %rsp
    .cfi_def_cfa_offset 32
    movslq	%esi, %rsi
    leaq	8(,%rsi,8), %rax
    leaq	(%rdi,%rax), %rbx
    leaq	-8(%rdi,%rax), %rbp
    movq	%rbx, %rsi
    movq	%rbp, %rdi
    movl	$0, %eax
    call	swap@PLT
    movq	0(%rbp), %rax
    imulq	(%rbx), %rax
    addq	%rax, sum(%rip)
    addq	$8, %rsp
    .cfi_def_cfa_offset 24
    popq	%rbx
    .cfi_def_cfa_offset 16
    popq	%rbp
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
*/
