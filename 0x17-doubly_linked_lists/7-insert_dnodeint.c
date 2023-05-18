#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head pointer
 * @idx: index whre node should be inserted
 * @n: new node integer
 * Return: node at index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *h;
	while (temp->next)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			if (i > 0)
				temp->prev->next = new;
			else
				*h = new;
			return (new);
		}

		temp = temp->next;
		i++;
	}

	if (idx == (i + 1) || idx == i)
	{
		if (idx == i + 1)
		{
			new->next = NULL;
			new->prev = temp;
			temp->next = new;
		}
		else
		{
			new->prev = temp->prev;
			new->next = temp;
			temp->prev->next = new;
		}
		return (new);
	}

	return (NULL);
}
