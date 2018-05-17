#include <stdio.h>


int main()
{
    
    int *nptr = NULL;
    
    printf("The value of ptr is %p\n", nptr);
    printf("The value of (nptr && *nptr) is %d\n", nptr && *nptr);
    
    
    int x = 55;
    int *ptr = &x;
    printf("The value of ptr is %p\n", ptr);
    printf("The value of (ptr && *ptr) is %d\n", ptr && *ptr);
    
    
    return 0;
}