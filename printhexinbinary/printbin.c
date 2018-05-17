#include <stdio.h>
#include <stdlib.h>
/* Print x in binary number of cnt max 32 bit */

void printBin(int x, int cnt)
{
   int i;
   char buf[33]= {0};		/*initate string */
   if (cnt > 32 || cnt < 1)     /* For cnt > 32 bit, print 32 bit */
      cnt = 32;
   for (i = 0; i < cnt; i++) 
      buf[cnt-1-i] = ((x>>i) & 0x1) ? '1' : '0';
   printf("%s\n", buf);
}

int main()
{
    int enteredValue;
    printf("Enter a hexidecimal number to convert to binary:\n");
    scanf("%x", &enteredValue);
    
    int numOfBits;
    printf("Enter a the number of bits to display(1-32)\n");
    scanf("%d", &numOfBits);
    
    printf("Result in binary: ");
    printBin(enteredValue, numOfBits);
        
    return 0;
}