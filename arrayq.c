#include <stdio.h>

#define H 9
#define J 15

int array1 [H][J];
int array2 [J][H];

void copy_array(int x, int y)
{
    array2[y][x] = array1[x][y];
}

int main()
{
    return 0;
}

// # [(i*c)+j] * size
// # [(j*c)+i] * size

// On Entry:
//  %edi = x
//  %esi = y
// copy_array:
//      movslq  %esi,%rsi               # %rsi = y
//      movslq  %edi,%rdi               # %rdi = x
//      leaq    (%rsi,%rsi,8), %rdx     # (2y)*8 into %rdx
//      addq    %rdi, %rdx              # (x + ((2y)*8)) into %rdx
//      movq    %rdi,%rax               # x into %rax
//      salq    $4, %rax                # x << 4 into %rax
//      subq    %rdi, %rax              # y - (x << 4) into %rax
//      addq    %rsi, %rax              # y + (y - (x << 4))
//      movl    array1(,%rax,4), %eax   # %eax = %rax * 4
//      movl    %eax, array2(, %rdx, 4) # %array2(,%rdx,4) = %eax
//      ret                             # return
