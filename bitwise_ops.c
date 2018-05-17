#include <stdio.h>
#include <stdlib.h>
/* HW 2.59 LS byte of x */

int main()
{
    int lb=0, xv=9, yv=10;
    //printf("\nChp 2, HW59, LS byte of x and rest of y\n\n");
    printf("Enter x (int 4-byte value) in hex: 0x");
    scanf("%x", &xv);
    printf("Enter y (int 4-bytes value) in hex: 0x");
    scanf("%x", &yv);
    printf("\nYou entered:\tx = 0X%X\n\t\ty = 0X%X\n\n", xv, yv);

    // lb = (xv & 0xFF) | (yv & ~0xFF);

    int and = xv & yv;
    int or = xv | yv;
    int xor = xv ^ yv;
    int notx = ~xv;
    int noty = ~yv;
    
    printf("0x%X AND 0x%X = 0x%X\n", xv, yv, and);
    printf("0x%X OR 0x%X = 0x%X\n", xv, yv, or);
    printf("0x%X XOR 0x%X = 0x%X\n", xv, yv, xor);
    printf("NOT 0x%X = 0x%X\t", xv, notx);
    printf("NOT 0x%X = 0x%X\n", yv, noty);
    
    //printf("LS byte of X and the rest of y: 0X%X\n\n", lb);
}