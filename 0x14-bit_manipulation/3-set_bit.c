#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * set_bit - ses\ts bit at a particaular index
 * @n: decimal number
 * @index: index
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = 1 << index;
	if (index > 32)
		return (-1);
	*n |= value;

	return (1);
}
