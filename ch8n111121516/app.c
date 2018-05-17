#include  "csapp.h"
#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

int  main()
{
   pid_t pid = fork();

   if (pid == 0)
      printf("\n Hi from the child - my pid = %d \n", pid);
   else
      printf("hello from parent - pid = %d \n", pid);

    return 0;
}
