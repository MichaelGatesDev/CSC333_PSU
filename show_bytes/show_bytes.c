/* show_bytes C from the power point */

#include <stdio.h>
#include <stdlib.h>

void show_bytes(unsigned char *bp, int len);
void show_int(int a);
void show_float(float b);
void show_pointer(void *c);

typedef unsigned char *byte_pointer;

int main(void)
{
	int first;
	int second;
	printf("Please enter a value!\n");
	scanf("%d", &first);
	printf("Please enter a second value!\n");
	scanf("%d", &second);

	show_int(first);
	show_int(second);

	// printf("The value as int =\t %d \t in Hex 0x%X \n\n", first, first);
	// printf("The value as int =\t %d \t in Hex 0x%08X \n\n", second, second);






	return 0;
}


void show_bytes(byte_pointer start, int len)
{
   int i;
   for (i = 0; i < len; i++)
	printf("%p\t0x%.2x\n",start+i, start[i]);
   printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}
void show_float(float x)
{
	show_bytes((byte_pointer) &x, sizeof(float));
}
void show_pointer(void *x)
{
	show_bytes((byte_pointer) &x, sizeof(void *));
}