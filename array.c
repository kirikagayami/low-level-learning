#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40};
    int *p = &numbers[0];
    char *c = (char *)&numbers[0];

    printf("c = %p\n", (void *)c);

    c++;

    printf("c after ++ = %p\n", (void *)c);

    printf("\n");

    printf("numbers[0] = %d\n", numbers[0]);
    printf("numbers[1] = %d\n", numbers[1]);

    printf("\n");

    printf("&numbers[0] = %p\n", (void *)&numbers[0]);
    printf("&numbers[1] = %p\n", (void *)&numbers[1]);

    printf("\n");

    printf("p = %p\n", (void *)p);
    printf("*p = %d\n", *p);
    printf("numbers[2] = %d\n", numbers[2]);
    printf("*(p+2) = %d\n", *(p + 2));

    printf("\n");

    p += 2;

    printf("*p = %d\n", *p);
    printf("p == &numbers[2] : %d\n", p == &numbers[2]);

    p -= 2;

    printf("p[2] = %d\n", p[2]);

    // the pointer size in 64 bit computer is 8 bytes.
    // int * describes an address and occupies 8 bytes
    // int 4 bytes
    // char 1 byte

    
    printf("\n");
    
    // this prints the address of the first element of the array
    
    printf("numbers = %p\n", (void *)numbers);

    return 0;
}