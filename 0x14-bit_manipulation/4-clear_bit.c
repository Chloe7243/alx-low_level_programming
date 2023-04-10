#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * clear_bit - clear bit at a particaular index
 * @n: decimal number
 * @index: index
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = 1 << index;

	if (index > 32)
		return (-1);

	if ((*n ^ value) > *n)
		*n &= ~value;
	else
		*n ^= value;

	return (1);
}
