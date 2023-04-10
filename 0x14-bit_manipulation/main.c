#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/*
	   n = get_bit(1024, 10);
	   printf("%d\n", n);
	   n = get_bit(98, 1);
	   printf("%d\n", n);
	   n = get_bit(1024, 0);
	   printf("%d\n", n);
	   return (0);
	   */

	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n);
	return (0);
}
