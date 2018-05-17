#include <stdio.h>
int main()
{
    int val = 0;
    printf("Please enter a value: \n");
    scanf("%d", &val);
    
    printf("You entered Decimal %d which is %X in Hex\n\n", val, val);
    
    return 0;
}