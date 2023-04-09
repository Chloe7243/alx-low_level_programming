#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - convert binary to int
 * @b: binary number
 * Return: int value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, mul = 1, val;
	long int i = strlen(b) - 1;

	if (!b)
		return (0);

	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		val = b[i] == '0' ? 0 : 1;
		sum += mul * val;
		mul *= 2;
	}

	return (sum);
}
