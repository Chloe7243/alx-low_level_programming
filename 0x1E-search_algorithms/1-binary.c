#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 *
 * @array: array to be searched
 * @size: size of array
 * @value: value to be found
 * Return: idx where value is found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int mid;
	size_t high = size - 1, low = 0, cur, i;

	if (!array || size < 1)
		return (-1);

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
		{
			printf("Searching in array: %d\n", mid);
			return (mid);
		}
		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
