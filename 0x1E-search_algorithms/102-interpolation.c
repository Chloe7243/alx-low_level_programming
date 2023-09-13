#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array
 *
 * @array: array to be searched
 * @size: size of array
 * @value: value to be found
 * Return: idx where value is found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t h = size - 1, pos, l = 0;

	if (!array || size < 1)
		return (-1);

	while (l <= h)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else if (array[pos] > value)
			h = pos - 1;
	}

	return (-1);
}
