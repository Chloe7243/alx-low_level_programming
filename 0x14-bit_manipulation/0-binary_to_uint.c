#include "main.h"
#include <string.h>

/**
 * binary_to_uint - convert binary to int
 * @b: binary number
 * Return: int value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	sum = (int *)b | 0;

	return (sum);
}
