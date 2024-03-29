#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: listint_t list
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;

	if (!ptr)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
