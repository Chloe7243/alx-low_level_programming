#include "lists.h"

/**
 * add_dnodeint - adds new node to list
 * @head: head pointer
 * @n: integer of new node
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	(*head) = new;

	return (*head);
}
