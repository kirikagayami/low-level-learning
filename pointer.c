#include <stdio.h>

// p and *p is different
// p is the address of x
// *p is go to the address stored inside p, and access what's there

int main(void)
{
    int x = 42;
    int *p = &x;

    printf("x = %d\n", x);
    printf("address of x = %p\n", (void*)&x);
    printf("p = %p\n", (void *)p);
    printf("*p = %d\n", *p);

    return 0;
}