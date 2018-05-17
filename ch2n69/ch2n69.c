/*
    2.69 ◆◆◆
    Write code for a function with the following prototype:

    // Do rotating left shift. Assume 0 <=n<w
    // Examples when x = 0x12345678 and w = 32:
    // n=4 -> 0x23456781, n=20 -> 0x67812345

    // unsigned rotate_left(unsigned x, int n);

    Your function should follow the bit-level integer coding rules (page 120). Be
    careful of the case n = 0.
*/

#include <stdio.h>


unsigned rotate_left(unsigned x, int n)
{
    int w = sizeof(unsigned) << 3;
    unsigned msb = x >> (w-n);
    unsigned new_msb = x << n;

    return new_msb | msb;
}


int main(void)
{
    unsigned xv;
    printf("Enter value in hex: 0x");
    scanf("%x", &xv);
    int amt;
    printf("Enter amount of bits to rotate left: ");
    scanf("%d", &amt);
    
    printf("Result: 0x%.8x\n", rotate_left(xv, amt));


    getchar();
    return 0;
}
