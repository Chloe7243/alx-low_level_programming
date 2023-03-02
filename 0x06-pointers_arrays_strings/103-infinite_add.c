#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Prints every other letter in a string
 *
 * @n1: string of numbers
 * @n2: string of numbers
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: int value
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	char r[size_r];

	i = atoi(n1) + atoi(n2);

	if (strlen(itoa(i)) >= size_r)
	{
		return ("0");
	}

	r = itoa(i);

	return (r);
}
