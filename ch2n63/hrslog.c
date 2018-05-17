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

unsigned srl(unsigned x, int k);

int main()
{
   int ct=0;
   unsigned xv, rv;
   printf("\nChp 2, HW63, shift x right log. using arithm shift\n\n");
   printf("Enter a value in hex: x = 0x");
   scanf("%x", &xv);
   printf("number of shifts count (0-31) i = ");
   scanf("%d", &ct);
   ct &= 0X1F;			/* shift count 0-31 */
   printf("\nYou entered x = 0X%.8X   and   i = %d\n\n", xv, ct);
   rv = srl(xv, ct);
   printf("After shift right log. x = 0X%.8X\n\n", rv);
   return 0;
}

unsigned srl(unsigned x, int k)
{
    unsigned xs=0, msk=0    ;
    unsigned rs;

    xs = (int) x >> k;            /* arithm. shift */
    int w = sizeof(unsigned) << 3;
    msk = ~(0xff << (w - k));

    rs = xs & msk;
    return rs;
}
