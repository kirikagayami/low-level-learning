#include <stdio.h>

int main(void)
{
	int x = 42;

	printf("x = %d\n", x);
	printf("address of x = %p\n", (void *)&x);
	// x is 4 bytes

	
	// endianness, lowest byte comes first. This is called little-endian

	printf("byte 0 = %u\n", ((unsigned char *)&x)[0]);
	// this is exactly 8 bits because 42 is 00101010
	printf("byte 1 = %u\n", ((unsigned char *)&x)[1]);
	// this contains 00000000
	printf("byte 2 = %u\n", ((unsigned char *)&x)[2]);
	// this contains 00000000
	printf("byte 3 = %u\n", ((unsigned char *)&x)[3]);
	// this contains 00000000

	int y = 258;

	printf("y = %d\n", y);
	printf("address of y = %p\n", (void *)&y);
	// y is 4 bytes

	
	// endianness, lowest byte comes first. This is called little-endian

	printf("byte 0 = %u\n", ((unsigned char *)&y)[0]);
	// this contains 00000010, and this is 2
	printf("byte 1 = %u\n", ((unsigned char *)&y)[1]);
	// this contains 00000001, and this is 1, because it's little-endian the position on byte 1 represent the ninth bit
	printf("byte 2 = %u\n", ((unsigned char *)&y)[2]);
	// this contains 00000000
	printf("byte 3 = %u\n", ((unsigned char *)&y)[3]);
	// this contains 00000000

	

	return 0;
}