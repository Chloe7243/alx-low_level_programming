#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @head: head pointer
 * @idx: index whre node should be inserted
 * Return: node at index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			new->n = n;
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			return (new);
		}

		temp = temp->next;
		i++;
	}

	return (NULL);
}
