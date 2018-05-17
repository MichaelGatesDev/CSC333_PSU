optimized: arith.c
		gcc -o arith arith.c

		gcc -O1 -S arith.c
		gcc -O1 -c arith.c

		objdump -d arith.o

normal: arith.c
		gcc -o arith arith.c

		gcc -S arith.c
		gcc -c arith.c

		objdump -d arith.o

clean:
		$(RM) x* *.s *.o
