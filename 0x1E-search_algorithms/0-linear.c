#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *
 * @array: array to be searched
 * @size: size of array
 * @value: value to be found
 * Return: idx where value is found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
