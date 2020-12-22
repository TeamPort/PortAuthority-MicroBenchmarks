int main()
{
    asm("movabs $0x7FFFFFFF, %rbx");
    asm("cmp $0, %rbx");
    asm("start:");
// Remove jg instructions to establish baseline
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("cmove %rdx, %rdx");
    asm("cmove %rcx, %rcx");
    asm("sub $1, %rbx");
    asm("cmp $0, %rbx");
    asm("jg start");
}

