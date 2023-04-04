#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: listint_t list
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int old_n;
	listint_t *ptr;

	ptr = (*head);

	if (!ptr)
		return (0);

	old_n = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (old_n);
}
