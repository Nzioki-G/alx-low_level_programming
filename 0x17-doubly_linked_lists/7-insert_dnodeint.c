#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given pstn
 * @h: head of list
 * @idx: position to insert
 * @n: data for new node
 *
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0) /* if list is empty */
	{
		new->next = *h;
		(*h)->prev = *h ? new : NULL;
		*h = new;
		return (*h);
	}
	current = *h;
	while (current->next)
	{
		current = current->next;
		i++;
		if (i == idx)
		{
			new->prev = current->prev;
			new->next = current;
			current->prev->next = new;
			current->prev = new;
		}
	}
	if (i + 1 < idx) /* out of bounds */
	{
		free(new);
		return (NULL);
	}

	if (!current->next && i + 1 == idx) /* insert at tail */
	{
		current->next = new;
		new->prev = current;
	}
	return (*h);
}
