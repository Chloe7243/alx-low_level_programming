#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;


	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("");
	printf("%u\n", n);
	n = binary_to_uint("0");
	printf("%u\n", n);
	n = binary_to_uint("1100i01e");
	printf("%u\n", n);
	n = binary_to_uint("e000000000000000000110010010");
	printf("%u\n", n);
	n = binary_to_uint("10");
	printf("%u\n", n);
	n = binary_to_uint("1000001");
	printf("%u\n", n);
	n = binary_to_uint("1i001");
	printf("%u\n", n);
	n = binary_to_uint("000001");
	printf("%u\n", n);
	return (0);
}
