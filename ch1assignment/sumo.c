#include <stdio.h>

int main()
{
    printf("Please enter the two numbers to add:\n");
    long num1 = 0;
    long num2 = 0;
    scanf("%ld%ld", &num1, &num2);
    
    long result = num1 + num2;
    printf("The sum of the two numbers is %ld\n", result);
    
    return 0;   
}