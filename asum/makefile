optimized: asum.c
		gcc -o sumopt main.c asum.c

		gcc -O1 -S asum.c
		gcc -O1 -c asum.c
		gcc -O1 -S main.c
		gcc -O1 -c main.c

		objdump -d main.o
		objdump -d asum.o

normal: asum.c
		gcc -o sum main.c asum.c

		gcc -S main.c
		gcc -c main.c
		gcc -S asum.c
		gcc -c asum.c

		objdump -d main.o
		objdump -d asum.o

clean:
		$(RM) x* *.s *.o
