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

	if (!head)
		return (0);
	ptr = *head;
	old_n = ptr->n;
	free(ptr);
	*head = ptr->next;

	return (old_n);
}
