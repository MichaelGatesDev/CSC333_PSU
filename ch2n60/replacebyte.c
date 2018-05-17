/*
  2.60 - Michael Gates

  "Suppose we number the bytes in a w-bit word from 0 (least significant) to w/8 − 1
  (most significant). Write code for the following C function, which will return an
  unsigned value in which byte i of argument x has been replaced by byte b:

  unsigned replace_byte (unsigned x, int i, unsigned char b);

  Here are some examples showing how the function should work:
    replace_byte(0x12345678, 2, 0xAB) --> 0x12AB5678
    replace_byte(0x12345678, 0, 0xAB) --> 0x123456AB"
*/

#include <stdio.h>
#include <stdlib.h>

unsigned int replace_bytes(unsigned x, int i, unsigned char b)
{
    int ishift = i << 3;
    unsigned mask = 0xFF << ishift;
    return (x & ~mask) | (b << ishift);
}

int main(void)
{
    /*
    int result1 = replaced_byte(0x12345678, 2, 0xAB);
    printf("0x12345678 -> 0x%X\n", result1);

    int result2 = replaced_byte(0x12345678, 0, 0xAB);
    printf("0x12345678 -> 0x%X\n", result2);

    getchar();
    return 0;
    */
    unsigned xv=0;
    unsigned yv=0, res;
    int xib=9;
    printf("\nChp 2, HW 2.60, place i-th byte of x with b \n\n");
    printf("Enter x (4 bytes value) in hex: 0x");
    scanf("%x", &xv);
    printf("Which byte (0-3) should be replaced i = ");
    scanf("%d", &xib);
    /*  .....    */				/* make sure bytes 0-3 */
    printf("Enter b (a bytes value) in hex: 0x");
    scanf("%x", &yv);
    /*  ...  */				/* make sure one byte only */
    printf("\nYou entered:\tx = 0X%X and  i = %d\n\t\tb = 0X%X\n", xv, xib, yv);
    res = replace_bytes(xv, xib, (unsigned char) yv);

    printf("\nPlace 0x%X  in byte %d  of  0x%X  gives:   0x%X\n\n", yv, xib, xv, res);
}
