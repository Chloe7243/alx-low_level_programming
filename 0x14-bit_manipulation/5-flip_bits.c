#include "main.h"

/**
 * flip_bits - no of bits you would need to flip change a number to another.
 * @n: decimal number
 * @m: second decimal number
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned long int b = n ^ m, value = ((unsigned long int)'1') << (size - 1);
	long int index = 0, count = 0;

	while (value)
	{
		if (value <= b)
		{
			if (b & value)
				count++;
			index++;
		}
		value >>= 1
	}

	return (count);
}
