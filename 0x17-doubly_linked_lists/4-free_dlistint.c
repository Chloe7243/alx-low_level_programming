#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head pointer
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	temp = head;

	while (temp)
	{
		free(temp);
		temp = temp->next;
	}
}
