#include "csapp.h"



// should print 4 times
int main()
{
    int i;

    for (i = 0; i < 2; i++)
        fork();

    printf("hello\n");
    exit(0);
}
