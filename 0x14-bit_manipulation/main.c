#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);

	/*
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	
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
	   printf("%u\n", n); */
	return (0);
}
