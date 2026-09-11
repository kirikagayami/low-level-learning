#include <stdio.h>

// p and *p is different
// p is the address of x
// *p is go to the address stored inside p, and access what's there

// p = changing the pointer itself
// *p = changing/accessing the thing being pointed to

int main(void)
{
    int x = 42;
    int y = 99;
    int *p = &x;
    int *q = &x;

    // p and q are separate variables.
    // they don't point to each other.
    // they both point to the same third thing: x

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

    *q = 100;
    printf("\n");

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

    // printf("x = %d\n", x);
    // printf("address of x = %p\n", (void*)&x);
    // printf("p = %p\n", (void *)p);
    // printf("*p = %d\n", *p);

    // p = &y;
    // *p = 500;
    // p = &x;

    // printf("x = %d\n", x);
    // printf("y = %d\n", y);
    // printf("address of y = %p\n", (void*)&y);
    // printf("p = %p\n", (void *)p);
    // printf("*p = %d\n", *p);
    

    // *p = 100;

    // printf("x = %d\n", x);
    // printf("*p = %d\n", *p);
    // printf("p = %p\n", (void *)p);
    // printf("\n");

    // printf("x = %d\n", x);
    // printf("y = %d\n", y);
    // printf("*p = %d\n", *p);
    
    return 0;
}