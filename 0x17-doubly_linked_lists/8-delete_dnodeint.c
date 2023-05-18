#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head pointer
 * @index: index where node should be deleted
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			temp->prev->next = temp->next;
			return (1);
		}

		i++;
		temp = temp->next;
	}

	return (-1);
}
