#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - print number of elements of a list
 *
 * @h: pointer to head
 *
 * Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
