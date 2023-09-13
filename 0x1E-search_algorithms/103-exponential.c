#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array
 *
 * @array: array to be searched
 * @size: size of array
 * @value: value to be found
 * Return: idx where value is found or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t high, mid, low, cur, i;

	if (!array || size < 1)
		return (-1);

	for (i = 1; i < size; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] > value)
			break;
	}

	low = i / 2;
	high = i - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			cur = array[i];
			(i == high) ? printf(" %ld", cur) : printf(" %ld,", cur);
		}
		printf("\n");

		mid = ((high - low) / 2) + low;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
