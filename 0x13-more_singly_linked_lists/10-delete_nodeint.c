#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position.
 *
 * @head: listint_t list
 * @index: the index of the node to be removed
 *
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *ptr2;

	ptr = (*head);

	if (!ptr)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (!ptr)
			return (-1);
		if (i == (index - 1))
			ptr2 = ptr;
		ptr = ptr->next;
	}

	ptr2->next = ptr->next;
	free(ptr);

	return (1);
}
