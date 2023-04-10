#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: decimal number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned long int value = ((unsigned long int)1) << (size - 1);

	if (!n)
		putchar('0');
	while (value)
	{
		if (value <= n)
		{
			if ((n & value) != 0)
				putchar('1');
			else
				putchar('0');
		}
		value >>= 1;
	}
}
