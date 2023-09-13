#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array
 *
 * @array: array to be searched
 * @size: size of array
 * @value: value to be found
 * Return: idx where value is found or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, block = sqrt(size), next;

	for (i = 0; i < size; i += block)
	{
		next = i + block;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		
		if (next >= size)
            		next = size - 1;
		if (array[next] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, next);
			for (j = i; j <= next; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
	}
	return (-1);
}
