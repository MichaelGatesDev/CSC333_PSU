#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tx = 2147483647;
    int ty = -2147483647-1;
    
    printf(tx > ty ? "tx > ty\n" : "tx < ty\n"); 
    printf("\ttx = %d\t\t0X%X\n\tty = %d\t0X%X\n\n", tx, tx, ty, ty);
    
    int ux = (unsigned) tx;
    int uy = (unsigned) ty;
    printf(ux > uy ? "ux > uy\n" : "ux < uy\n"); 
    
    printf("\tux = %u\t\t0X%X\n\tuy = %u\t\t0X%X\n\n", ux, ux, uy, uy);
    
    
    
    
    return 0;
}