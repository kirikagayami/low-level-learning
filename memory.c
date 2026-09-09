#include <stdio.h>

int main(void)
{
	int x = 42;
	// int *p = &x;

	// printf("x = %d\n", x);
	// printf("&x = %p\n", (void *)&x);

	// printf("p = %p\n", (void *)p);
	// printf("*p = %d\n", *p);

	printf("x = %d\n", x);
	// printf("size = %zu bytes\n", sizeof(x));
	
	// & operator is called the address-of-operator 
	// x currently exists at virtual memory address, the address is different, depends on where the os put it in the memory
	printf("address of x = %p\n", (void *)&x);

	return 0;
}