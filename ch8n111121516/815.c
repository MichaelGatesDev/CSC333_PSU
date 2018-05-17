#include "csapp.h"

void doit()
{
    if (fork() == 0)
    {
        fork();
        printf("hello\n");
        return;
    }
    return;
}

// should print 5 times
int main()
{
    doit();
    printf("hello\n");
    exit(0);
}
