#include <stdio.h>

unsigned int reverseBytes(unsigned int x)
{
    int b1 = (x >> 24) & 0x000000FF;
    int b2 = (x >> 8) & 0x0000FF00;
    int b3 = (x << 8) & 0x00FF0000;
    int b4 = (x << 24) & 0xFF000000;

    int result = b1 | b2 | b3 | b4;
    return result;
}

int main(void)
{
    int input;
    printf("Enter x (4-byte value) in hex: 0x");
    scanf("%x", &input);

    unsigned int result = reverseBytes(input);

    printf("0x%X reversed is 0x%X\n", input, result);
}
