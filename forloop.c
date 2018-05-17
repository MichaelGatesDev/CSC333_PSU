#include <stdio.h>

int main()
{
    int j= 10;
    for(int i=0; i<=j; i++)
    {
        j = 9;
        if(i == 5)
        {
            continue;
        }
        printf("Hello %d\n", i);
    }

    return 0;
}
