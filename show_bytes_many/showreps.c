#include <stdio.h>
#include <stdlib.h>

void show_bytes(unsigned char *bp, int len);
void show_int(int a);
void show_float(float b);
void show_pointer(void *c);

void show_short(short s);
void show_long(long l);
void show_double(double d);

typedef unsigned char *byte_pointer;

int main(void)
{
	int input;
	printf("Please enter a value!\n");
	scanf("%d", &input);

	// printf("The value as int =\t %d \t in Hex 0x%X \n\n", first, first);
	// printf("The value as int =\t %d \t in Hex 0x%08X \n\n", second, second);


    //printf("Int = %d", input);
	//show_int(input);
    
    //printf("Float = %f", input);
	//show_float(input);
    
    //printf("Pointer = 0x%X", input);
	//show_pointer(&input);
    
    printf("Short = %i\n", input);
    show_short(input);
    
    printf("Long = %i\n", input);
    show_long(input);
    
    //printf("Double = %i\n", input);
    //show_double(input);



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

void show_short(short s)
{
    show_bytes((byte_pointer) &s, sizeof(short));
}

void show_long(long l)
{
    show_bytes((byte_pointer) &l, sizeof(long));
}

void show_double(double d)
{
    show_bytes((byte_pointer) &d, sizeof(double));
}