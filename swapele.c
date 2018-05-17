void swap_ele(long a[], int i)
{
    swap(&a[i], &a[i+1]);
}

/*  
    .file	"swapele.c"
    .text
    .globl	swap_ele
    .type	swap_ele, @function
    swap_ele:
    .LFB0:
    .cfi_startproc
    subq	$8, %rsp
    .cfi_def_cfa_offset 16
    movslq	%esi, %rsi
    leaq	8(,%rsi,8), %rax
    leaq	(%rdi,%rax), %rsi
    leaq	-8(%rdi,%rax), %rdi
    movl	$0, %eax
    call	swap@PLT
    addq	$8, %rsp
    .cfi_def_cfa_offset 8
    ret
    .cfi_endproc
    .LFE0:
    .size	swap_ele, .-swap_ele
    .ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
    .section	.note.GNU-stack,"",@progbits
*/
