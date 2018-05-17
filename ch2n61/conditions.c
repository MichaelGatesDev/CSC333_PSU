#include <stdio.h>

int main()
{
    printf("Enter any 4-byte hex value: 0x");
    int x = 0;
    scanf("%X", &x);
    printf("\n");

    int r1 = !!x;
    int r2 = !x;


    int r3 = !!(x & 0xFF);
    int r4 = !!(~x & 0xFF);

    printf("Any bit of x equals 1: %d\n", r1);
    //printf("Any bit of x equals 0: %d\n", r2);
    //printf("Any bit in the least significant byte of x equals 1: %d\n", r3);
    //printf("Any bit in the most significant byte of x equals 0: %d\n", r4);

    return 0;
}
