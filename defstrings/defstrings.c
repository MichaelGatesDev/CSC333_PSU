#include <stdio.h>

int main()
{
    char greeting[] = "hello";
    char hello[10] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", hello);

    for(int i=0; i<sizeof(hello); i++)
    {
        printf("%c\n", hello[i]);
    }

    return 0;
}
