#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * get_bit - gets a bit  at an index
 * @n: decimal number
 * @index: index
 * Return: void
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int bit_val;

	while (i <= index)
	{
		if (!n)
			return (-1);
		if (i == index)
		{
			bit_val = n % 2;
			break;
		}
		n /= 2;
		i++;
	}

	return (bit_val);
}
