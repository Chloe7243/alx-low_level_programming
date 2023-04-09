#include <stdio.h>

/**
 * get_endianness - get endianness of system;
 * Return: int;
 */

int get_endianness(void)
{
	int num = 0x12345678;
	char *ptr = (char *)&num;

	if (ptr[0] == 78)
		return (0);
	return (1);
}
