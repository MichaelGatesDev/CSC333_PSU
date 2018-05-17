#include <stdio.h>
#include <stdlib.h>

/* Chp7  swap values  - example c */
/* 11-linking Powerpoint slides 2 and 4 -  See makefile for linking */

void swap( );

int buf[2] = {1, 2};

int main()
{
   printf("\nbuf[0] = %d and buf[1] = %d\n\n", buf[0], buf[1]);

   swap();
   printf("After swap\n");
   printf("buf[0] = %d and buf[1] = %d\n\n", buf[0], buf[1]);
   return 0;
}
