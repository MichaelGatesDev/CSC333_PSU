#include "csapp.h"
int counter = 1;

// counter should be 2
int main()
{
    if (fork() == 0)
    {
        counter--;
        exit(0);
    }
    else
    {
        wait(NULL);
        printf("counter = %d\n", ++counter);
    }
    exit(0);
}
