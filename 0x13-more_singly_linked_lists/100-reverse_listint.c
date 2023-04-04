#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *ptr2 = NULL;

	while (*head)
	{
		ptr = (*head)->next;
		(*head)->next = ptr2;
		ptr2 = *head;
		*head = ptr;
	}

	*head = ptr2;

	return (*head);
}
