#include <stdio.h>
#include <stdlib.h>
/* HW 2.64 if any odd-bits is set, return 1, else 0 */

int any_odd_one(unsigned x);
void printbin(int x, int cnt);

int main()
{
   unsigned xv;
   printf("\nChp 2, HW64 if any odd-bits are set, return 1, else 0 \n\n");
   printf("Enter a value in hex: x = 0x");
   scanf("%x", &xv);

   printf("\nYou entered x = 0X%.8X ", xv);

   printf("\n\n");

   if (any_odd_one( xv ))
      printf("Some odd-bits are set to 1\n\n");
   else
      printf("No odd-bit is set to 1\n\n");

  return 0;
}

int any_odd_one(unsigned x) {
   unsigned rv = 0;

   return ((x >> 0) | (x >> 8) | (x >> 16) | ( x>> 24)) & 0xAA;
}
