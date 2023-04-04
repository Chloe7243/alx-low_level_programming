#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: listint_t list
 * @idx: the index of the list where the new node should be added
 * @n: value to be added
 *
 * Return: int
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *ptr2, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	ptr = (*head);

	if (!ptr)
		return (NULL);

	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx; i++)
	{
		if (i == (idx - 1))
			ptr2 = ptr;
		ptr = ptr->next;
	}

	new->next = ptr;
	ptr2->next = new;


	return (new);
}
