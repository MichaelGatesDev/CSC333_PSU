#include <stdio.h>


int main()
{
    int first;
    int amount;
    printf("Enter first number in hex: 0x");
    scanf("%x", &first);
    printf("Enter number of bits to shift (max 32): ");
    scanf("%x", &amount);
    
    printf("0x%X << %d\n", first << amount, amount);

    
    
    return 0;
}