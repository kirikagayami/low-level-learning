#include <stdio.h>

void change(int *p)
{
    *p = 100;
}

int main(void)
{

    int x = 42;
    printf("before\n");
    printf("\n");
    
    printf("x = %d\n", x);

    change(&x);
    printf("\n");
    printf("after\n");
    printf("\n");
    
    printf("x = %d\n", x);

    return 0;
}