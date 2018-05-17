/*
    2.63 ◆◆◆
    Fill in code for the following C functions. Function srl performs a logical right

    shift using an arithmetic right shift (given by value xsra), followed by other oper-
    ations not including right shifts or division. Function sra performs an arithmetic

    right shift using a logical right shift (given by value xsrl), followed by other
    operations not including right shifts or division. You may use the computation
    8*sizeof(int) to determine w, the number of bits in data type int. The shift
    amount k can range from 0 to w − 1.

        unsigned srl(unsigned x, int k) {
            // Perform shift arithmetically
            unsigned xsra = (int) x >> k;
            // .
            // .
            // .
        }

        int sra(int x, int k) {
            // Perform shift logically
            int xsrl = (unsigned) x >> k;
            // .
            // .
            // .
        }
*/

#include <stdio.h>
#include <stdlib.h>
/* HW 2.63 - Do right shift arithm. but use log. right shift 1st and other op.  */


int sra(int x, int k);

int main()
{
   int ct=0;
   int yv, rv;

   printf("\nChp 2, HW63, shift y right arithm. using log. shift\n\n");
   printf("Enter a value in hex: y = 0x");
   scanf("%x", &yv);
   printf("number of shifts count (0-31) i = ");
   scanf("%d", &ct);
   ct &= 0X1F;			/* shift count 0-31 */
   printf("\nYou entered y = 0X%.8X   and   i = %d\n\n", yv, ct);
   rv = sra(yv, ct);
   printf("After shift right arithm. y = 0X%.8X\n\n", rv);

   return 0;
}

int sra(int x, int k)
{
   /* Perform shift logically */
   int xsrl      = (unsigned) x >> k;
   int w         = sizeof(int) << 3;
   unsigned sign = !!((0x1 << (w - 1)) & x);
   unsigned mask = (~sign + 1) << (w - k);

   return xsrl | mask;
}
