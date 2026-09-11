#include <stdio.h>

void change(int *p)
{
    *p = 100;
}

int main(void)
{

    int x = 42;
    int *p = &x;
    printf("before\n");
    printf("\n");
    
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);

    change(p);
    printf("\n");
    printf("after\n");
    printf("\n");
    
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);

    return 0;
}