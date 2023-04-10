#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to int
 * @b: binary number
 * Return: int value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = 0, j = 0, val;

	while (b[i])
		i++;
	i--;

	while (b[j])
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		val = b[j] == '0' ? 0 : 1;
		sum += val << i;
		i--;
		j++;
	}

	return (sum);
}
