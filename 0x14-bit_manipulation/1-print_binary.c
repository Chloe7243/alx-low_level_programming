#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_binary - convert decimal to binary
 * @n: decimal number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int max = UINT_MAX << 31;

	while (max > 0)
	{
		if ((n & max) != 0)
			_putchar('1');
		else
			_putchar('0');
		max >>= 1;
	}

}
