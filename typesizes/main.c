#include <stdio.h>

int main()
{
    int charSize = sizeof(char);
    printf("Size of char is: %i byte(s)\n", charSize);
    
    int shortSize = sizeof(short);
    printf("Size of short is: %i byte(s)\n", shortSize);
    
    int intSize = sizeof(int);
    printf("Size of int is: %i byte(s)\n", intSize);
    
    int longSize = sizeof(long);
    printf("Size of long is: %i byte(s)\n", longSize);
    
    
    return 0;
}