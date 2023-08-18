#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index in dlist
 * @h: head node of dlist
 * @idx: the index to insert into list
 * @n: the value of node to insert
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!*h && idx == 0)
	{
		*h = new;
		return (new);
	}
	current = *h;
	while (current->next && count < idx)
	{
		current = current->next;
		count++;
	}
	current->prev->next = new;
	new->next = current;
	new->prev = current->prev;
	current->prev = new;

	return (new);
}
