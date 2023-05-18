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
	if (new == NULL || h == NULL)
		return NULL;

	if (idx == 0)
		return add_dnodeint(h, n);

	temp = *h;
	new->n = n;
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = new;
			temp->prev = new;
			return new;
		}

		i++;
		temp = temp->next;
	}

	if (idx == i)
		return add_dnodeint_end(h, n);

	return NULL;
}

