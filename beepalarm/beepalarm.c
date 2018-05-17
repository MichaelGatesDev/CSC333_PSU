#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <sys/types.h>

int Wcnt = 0;

void handler(int sig)
{
    static int beeps = 0;

    printf("BEEP\t\tthe wait counter is %d \n", Wcnt);
    if(++beeps < 5)
    {
        alarm(5);
    }
    else
    {
        printf("BOOM!\n");
        exit(0);
    }
}
int main()
{
    signal(SIGALRM, handler);
    alarm(5);

    while(1)
    {
        Wcnt++;
    }
    exit(0);
}
