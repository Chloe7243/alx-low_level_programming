#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements of a list
 *
 * @h: pointer to head
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	char *s;

	while (h != NULL)
	{
		s = h->str == NULL ? "(nil)" : h->str;
		printf("[%d] %s\n", h->len, s);
		count++;
		h = h->next;
	}

	return (count);
}
