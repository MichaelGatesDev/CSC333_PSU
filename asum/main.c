#include <stdio.h>

int sum(int x, int y);

int main()
{
    // push %rpb            -- Pushes register base pointer to the stack
    // mov %rsp,%rpb        -- Loads register stack pointer at position of base pointer
    // sub $0x10,%rsp       -- Adjust stack pointer to set aside 16 bytes
    

    // movl $0x5,-0xC(%rsp) -- Load value {5} onto stack (RSP-12) (12 bytes (3 ints) down)
    int a = 5;

    // movl $0xA,-0x8(%rsp) -- Load value {10} onto stack (RSP-8) (8 bytes (2 ints) down)
    int b = 10;

    // mov -0x8(%rbp),%edx  -- Loads value {10} from stack (RSP-8) into register EDX
    // mov -0xC(%rbp),%eax  -- Loads value {5} from stack (RSP-12) into register EAX
    // mov %edx,%esi        -- Loads value of {10} from register EDX into register ESI
    // mov %eax,%edi        -- Loads value of {5} from register EAX into register EDI


    // callq 25 <main+0x25> -- Pushes return address onto stack and jumps to 25 ???
    // mov %eax,-0x4(%rbp)  -- Copies returned value from EAX into register RBP-4
    int result = sum(a, b);


    // mov $0x0,%eax        -- Moves value of {0} into register EAX
    // leaveq               -- ??????
    // retq                 -- Pops return address from stack into register RIP


    // ====================================================================== \\
    // mov -0x4(%rbp),%ecx  -- Moves value of {???} in register RBP-4 into register ECX
    // mov -0x8(%rbp),%edx  -- Moves value of {???} in register RBP-8 into register EDX
    // mov -0xC(%rbp),%eax  -- Moves value of {???} in register RBP-12 into register EAX

    // mov %eax,%esi        -- Moves value of register EAX into register ESI
    // lea 0x0(%rip),%rdi   -- ?????
    // mov 0x0,%eax
    // printf("Result of %d + %d = %d\n", a, b, result);

    // ====================================================================== \\
}
