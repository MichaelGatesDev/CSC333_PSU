#include <stdio.h>

int accum = 0;

int sum(int x, int y)
{
    int r = x + y;
    accum += r;
    return r;
}

/*
int main()
{

    return 0;
}
*/
