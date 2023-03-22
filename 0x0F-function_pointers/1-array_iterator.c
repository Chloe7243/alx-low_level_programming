#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - performs function on array
 *
 * @array: name of the array
 * @size: size of array
 * @action: function to perform
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
