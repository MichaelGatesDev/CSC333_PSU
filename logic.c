#include <stdio.h>


int main()
{
    
    int first;
    int second;
    printf("Enter 1st value in hex: ");
    scanf("%x", &first);
    printf("\n");
    
    printf("Enter 2nd value in hex: ");
    scanf("%x", &second);
    printf("\n");
    
    printf("first && second = 0x%X\n", first && second);
    printf("first || second = 0x%X\n", first || second);
    printf("!first = 0x%X\n", !first);
    printf("!second = 0x%X\n", !second);
    printf("!!first = 0x%X\n", !!first);
    printf("!!second = 0x%X\n", !!second);    
    
    return 0;
}