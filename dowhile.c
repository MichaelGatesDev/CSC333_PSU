#include <stdio.h>
#include <stdlib.h>

int pcount_do(unsigned x)
{
    int res = 0;
    do{
        res += x & 0x1;
        x >>= 1;
    } while(x);
    return res;
}

int pcount_while(unsigned x)
{
    int res = 0;

    res += x & 0x1;
    while(x)
    {
        res += x & 0x1;
        x >>= 1;
    }
    return res;
}

int pcount_for(unsigned x)
{
    int res = 0;
    for(res=0; x>0; x >>= 1)
    {
        res += x & 0x1;
    }
    return res;
}


int main()
{
    int res;
    unsigned xv = 0xFFFFF;

    res = pcount_for(xv);
    printf("\n\tThere are %d one's in 0X%X\n\n", res, xv);

    return 0;
}
