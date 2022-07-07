#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given pstn
 * @h: head of list
 * @idx: position to insert
 * @n: data for new node
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	/* insert at head */
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = *h ? new : NULL;
		*h = new;
		return (*h);
	}
	/* insert in the middle */
	while (current->next)
	{
		current = current->next;
		i++;
		if (i == idx)
		{
			new->prev = current->prev; /* prev <- new */
			current->prev->next = new; /* prev -> new */
			new->next = current; /* new -> current */
			current->prev = new; /* new <- current */
			return (new);
		}
	}
	/* insert at tail */
	if (!current->next && i + 1 == idx)
	{
		current->next = new;
		new->prev = current;
		return (new);
	}

	free(new);	/* out of bounds */
	return (NULL);
}
