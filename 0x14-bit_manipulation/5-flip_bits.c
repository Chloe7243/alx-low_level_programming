#include "main.h"

/**
 * flip_bits - no of bits you would need to flip change a number to another.
 * @n: decimal number
 * @m: second decimal number
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = n ^ m, value = 1;
	long int index = 0, count = 0;

	while ((value << index) <= b && b)
	{
		if ((b & (value << index)) != 0)
			count++;
		index++;
	}

	return (count);
}
