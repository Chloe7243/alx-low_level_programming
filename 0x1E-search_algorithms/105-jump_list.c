#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, block = sqrt(size);
	listint_t *ptr = list, *ptr2, *prev;


	do {
		prev = ptr;
		for (i = 0; ptr->next && i < block; i++)
		{
			ptr = ptr->next;
		}

		printf("Value checked at index [%ld] = [%d]\n", ptr->index, ptr->n);
		if (ptr->n >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					prev->index, ptr->index);
			for (ptr2 = prev; ptr2->index <= ptr->index; ptr2 = ptr2->next)
			{
				printf("Value checked at index [%ld] = [%d]\n", ptr2->index, ptr2->n);
				if (ptr2->n == value)
					return (ptr2);
			}
			break;
		}

	} while (ptr != prev);
	return (NULL);
}
