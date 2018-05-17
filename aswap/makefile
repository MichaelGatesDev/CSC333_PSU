optimized: swap.c
		gcc -o xswap main.c swap.c

		gcc -O1 -S swap.c
		gcc -O1 -c swap.c

		objdump -d swap.o

normal: swap.c
		gcc -o xswap main.c swap.c

		gcc -S swap.c
		gcc -c swap.c

		objdump -d swap.o

clean:
		$(RM) x* *.s *.o
