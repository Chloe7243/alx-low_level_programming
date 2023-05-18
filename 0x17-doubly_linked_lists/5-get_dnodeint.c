#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head pointer
 * @index: index to be gotten
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);

		temp = temp->next;
		i++;
	}
	return (NULL);
}
