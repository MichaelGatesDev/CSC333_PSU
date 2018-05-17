#include <stdio.h>

int main()
{

    int first;
    printf("Enter the hex value to shift to the right: 0x");
    scanf("%x", &first);
    printf("\n");
    int shiftAmt;
    printf("Enter the amount of bits to shift: ");
    scanf("%d", &shiftAmt);
    printf("\n");

    int logical = first >> shiftAmt;
    printf("0x%X shifted (logically) to the right %d bits is 0x%X\n", first, shiftAmt, logical);

    unsigned int arithmetic = (unsigned) first >> (unsigned) shiftAmt;
    printf("0x%X shifted (arithmetically) to the right %d bits is 0x%X\n", first, shiftAmt, arithmetic);


}
