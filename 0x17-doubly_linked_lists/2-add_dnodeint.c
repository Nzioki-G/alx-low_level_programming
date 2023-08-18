#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlidt
 * @head: the first node of dlist
 * @n: the value of node to insert
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return new;
}