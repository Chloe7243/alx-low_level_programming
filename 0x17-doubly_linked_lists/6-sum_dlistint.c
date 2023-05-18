#include "lists.h"

/**
 * sum_dlistint - sums values in list
 * @head: head pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
