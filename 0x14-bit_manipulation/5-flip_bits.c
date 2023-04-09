#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * flip_bits - no of bits you would need to flip change a number to another.
 * @n: decimal number
 * @m: second decimal number
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b, value = 1, index = 0;
	unsigned int count = 0;

	b = m ^ n;
	while ((value << index) <= b)
	{
		if ((b & (value << index)) != 0)
			count++;
		index++;
	}

	return (count);
}
