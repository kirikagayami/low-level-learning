#include <stdio.h>

void change(int *p)
{
    *p = 100;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(void)
{

    printf("before: \n");
    int a = 10;
    int b = 20;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(&a, &b);

    printf("after: \n");

    printf("a = %d\n", a);
    printf("b = %d\n", b);
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