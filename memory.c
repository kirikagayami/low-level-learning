#include <stdio.h>

int main(void)
{
	int x = 42;
	int y = 99;

	printf("x = %d\n", x);
	printf("address of x = %p\n", (void *)&x);
	// x is 4 bytes apart from y, you can check the memory address
	
	printf("y = %d\n", y);
	printf("address of y = %p\n", (void *)&y);

	return 0;
}