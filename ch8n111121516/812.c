#include "csapp.h"

void doit()
{
    fork();
    fork();
    printf("hello\n");
    return;
}

// should print 6 times
int main()
{
    doit();
    printf("hello\n");
    exit(0);
}
