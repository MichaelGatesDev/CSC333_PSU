#include <stdio.h>

int main()
{
    
    int num1 = 0x0F;
    int num2 = 0xF0;
    printf("Enter first hex value:\n");
    scanf("%x", &num1);
    printf("Enter second hex value:\n");
    scanf("%x", &num2);
    
    int result = num1 + num2;
    
    printf("Sum of 0x%X and 0x%X = 0x%X\n", num1, num2, result);
    
    
   return 0;
}