#include <stdio.h>

void swap(long *xp, long *yp);

int main()
{
    long xv = 12345, yv = 99999;
    long *xp, *yp;
    long xs, ys;

    printf("\nChapter 3 | C and Assembly Code\n");
    printf("\nX = %ld and Y = %ld\n", xv, yv);

    xp = &xv;
    yp = &yv;

    swap(xp, yp);
    xs = *xp;
    ys = *yp;

    printf("\nAfter swap:\tX = %ld and Y = %ld\n", xs, ys);
}
