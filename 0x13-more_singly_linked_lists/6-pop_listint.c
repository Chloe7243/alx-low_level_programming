#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: listint_t list
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	if (!head)
		return (0);
	int old_n = (*head)->n;
	*head = (*head)->next;

	return (old_n);
}
