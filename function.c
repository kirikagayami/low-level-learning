#include <stdio.h>

void change(int *p)
{
    *p = 100;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    temp = *p;
}

int main(void)
{

    printf("before: \n");
    int a = 10;
    int b = 20;

    swap(&a, &b);

    // int x = 42;
    // printf("before\n");
    // printf("\n");
    
    // printf("x = %d\n", x);

    // change(&x);
    // printf("\n");
    // printf("after\n");
    // printf("\n");
    
    // printf("x = %d\n", x);

    return 0;
}