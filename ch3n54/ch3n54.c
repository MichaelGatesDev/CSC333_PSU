/*

    3.54 ◆
    A function with prototype
    int decode2(int x, int y, int z);
    is compiled into IA32 assembly code. The body of the code is as follows:

    Homework Problems 295

    x at %ebp+8
    y at %ebp+12
    z at %ebp+16

        1 movl 12(%ebp), %edx
        2 subl 16(%ebp), %edx
        3 movl %edx, %eax
        4 sall $31, %eax
        5 sarl $31, %eax
        6 imull 8(%ebp), %edx
        7 xorl %edx, %eax

    Parameters x, y, and z are stored at memory locations with offsets 8, 12, and 16
    relative to the address in register %ebp. The code stores the return value in register
    %eax.
    Write C code for decode2 that will have an effect equivalent to our assembly
    code.

*/


int decode2(int x, int y, int z)
{
    // 1 - move y into %edx
    // 2 - compute y-z
    int n = y - z;

    // 3 - move y-z into %eax
    int o = n;
    // 4 - (y-z) <<= 31
    o = n << 31;
    // 5 - (Dest = Dest >> Src)
    o = n >> 31;

    // 6 - (Dest = Dest * Src)
    n = x * n;
    // 7 - xorl
    return o ^ n; // (((y-z) << 31) >> 31) ^ (x * (y-z))
}

int main()
{
    return 0;
}
