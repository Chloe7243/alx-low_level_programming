#include "main.h"

/**
 * get_bit - gets a bit  at an index
 * @n: decimal number
 * @index: index
 * Return: void
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value = 1 << index;
	int bit_val = value & n != 0 ? 1 : 0;

	if (index > 32)
		return (-1);

	return (bit_val);
}
