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
	int i,  is_zero = 1;

	for (i = 0; i < 64; i++)
	{
		if ((n & ((unsigned long int)1 << i)) != 0)
		{
			is_zero = 0;
			_putchar('1');
		}
		else
		{
			if (is_zero == 0)
				_putchar('0');
		}
	}

	if (is_zero)
		_putchar('0');

}
