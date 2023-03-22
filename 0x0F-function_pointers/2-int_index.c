#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for which the cmp matches
 *
 * @array: name of the array
 * @size: size of array
 * @cmp: comparison function
 *
 * Return: integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
