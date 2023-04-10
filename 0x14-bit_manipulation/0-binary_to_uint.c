#include "main.h"

/**
 * binary_to_uint - convert binary to int
 * @b: binary number
 * Return: int value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, mul = 1, val;
	long int i = 0;

	if (!b)
		return (0);

	while (*b)
		i++;

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
