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

	if ((*n ^ value) > *n)
	{
		*n = *n & ~value;
	}
	else
		*n = *n ^ value;

	return (1);
}
