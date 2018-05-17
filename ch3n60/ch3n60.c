/*

    3.60 ◆◆◆

    Consider the following source code, where R, S, and T are constants declared with

        #define:

        int A[R][S][T];

        int store_ele(int i, int j, int k, int *dest)
        {
            *dest = A[i][j][k];
            return sizeof(A);
        }

    In compiling this program, gcc generates the following assembly code:
        i at %ebp+8, j at %ebp+12, k at %ebp+16, dest at %ebp+20
        1 movl 12(%ebp), %edx
        2 leal (%edx,%edx,4), %eax
        3 leal (%edx,%eax,2), %eax
        4 imull $99, 8(%ebp), %edx
        5 addl %edx, %eax
        6 addl 16(%ebp), %eax
        7 movl A(,%eax,4), %edx
        8 movl 20(%ebp), %eax
        9 movl %edx, (%eax)
        10 movl $1980, %eax

    A. Extend Equation 3.1 from two dimensions to three to provide a formula for
    the location of array element A[i][j][k].

    B. Use your reverse engineering skills to determine the values of R, S, and T
    based on the assembly code.
*/

#include <stdio.h>

/*
    A. Extend Equation 3.1 from two dimensions to three to provide a formula for
       the location of array element A[i][j][k].

       &A[i][j][k] = aStartLoc + 4*(T*(i*S + j) + k)
*/

/*
    B. Use your reverse engineering skills to determine the values of R, S, and T
    based on the assembly code.

    i at %ebp+8, j at %ebp+12, k at %ebp+16, dest at %ebp+20

    1 movl 12(%ebp), %edx           # %edx = j
    2 leal (%edx,%edx,4), %eax      # %eax = j*4+j                  => 5j
    3 leal (%edx,%eax,2), %eax      # %eax = 5j*2 + j               => 11j
    4 imull $99, 8(%ebp), %edx      # %edx = i*99                   => 99i
    5 addl %edx, %eax               # %eax = i*99 + %eax            => 99i + 11j
    6 addl 16(%ebp), %eax           # %eax = k + %eax               => 99i + 11j + k
    7 movl A(,%eax,4), %edx         # %edx = A_START + %eax*4       => A_START + (99i + 11j + k)*4
    8 movl 20(%ebp), %eax           # %eax = dest                   =>
    9 movl %edx, (%eax)             # &dest = %edx                  => &A = A_START + (99i + 11j + k)*4
    10 movl $1980, %eax             # R*S*T = 1980                  => &A[i][j][k] = A_START + (11(j+9i)+k)*4

    S=9, T=11, R=20
 */


#define R 20
#define S 9
#define T 11

int A[R][S][T];

int store_ele(int i, int j, int k, int *dest)
{
    *dest = A[i][j][k];
    return sizeof(A);
}
