#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: listint_t list
 * @index:cindex of the node
 *
 * Return: int
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;

	for (i = 0; i < index; i++)
	{
		if (!node)
			return (NULL);
		node = node->next;
	}

	return (node);
}
