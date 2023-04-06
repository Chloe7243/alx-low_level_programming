#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - convert binary to int
 * @b: binary number
 * Return: int value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = strlen(b) - 1;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '0')
		{
			i--;
			b++;
			continue;
		}

		sum += val(i);
		i--;
		b++;

	}

	return (sum);
}

/**
 * val - exponential
 * @i: exponent
 * Return: int value.
 */

unsigned int val(unsigned int i)
{
	if (i == 0)
		return (1);
	return (2 * val(--i));
}
