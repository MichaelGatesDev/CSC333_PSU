#include <stdio.h>

int main()
{
    int x;
    int y;
    unsigned ux = x;
    unsigned uy = y;

    printf("x < 0:\t\t%d\n", x < 0);
    printf("ux >= 0:\t%d\n", ux >= 0);
    printf("x & 7 == 7:\t%d\n", x & 7 == 7);
    printf("ux > -1:\t%d\n", ux > -1);
    printf("x > y:\t\t%d\n", x > y);
    printf("x * x >= 0:\t%d\n", x * x >= 0);
    printf("x > 0 && y > 0:\t%d\n", x > 0 && y > 0);

}
