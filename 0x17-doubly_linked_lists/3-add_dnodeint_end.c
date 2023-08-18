#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of dlist
 * @head: the first node of dlist
 * @n: the value of node to insert
 * Return: address of inserted node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	}

	return (new);
}
