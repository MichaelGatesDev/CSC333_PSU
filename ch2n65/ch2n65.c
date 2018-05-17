/*
    Write code to implement the following function:

        Return 1 when x contains an odd number of 1s; 0 otherwise.
        Assume w=32.

    int odd_ones(unsigned x);

    Your function should follow the bit-level integer coding rules (page 120), except
    that you may assume that data type int has w = 32 bits.
    Your code should contain a total of at most 12 arithmetic, bit-wise, and logical
    operations.
*/

#include <stdio.h>

int odd_ones(unsigned x);
int even_ones(unsigned x);

int main(void)
{
    unsigned xv, rv;
    printf("\nChp 2, HW65, if odd 1's in a word return 1, else 0 \n\n");
    printf("Enter a value in hex: x = 0x");
    scanf("%x", &xv);

    printf("\n\n");

    if (odd_ones(xv))
        printf("There are odd number of ones in 0X%X\n\n", xv);
    else
        printf("There are even number of ones in 0X%X\n\n", xv);

    getchar();
    return 0;
}


int odd_ones(unsigned x)
{
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 1;
}

int even_ones(unsigned x)
{
    return !odd_ones(x);
}
