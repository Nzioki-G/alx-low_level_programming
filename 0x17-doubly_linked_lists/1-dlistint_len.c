#include "lists.h"

/**
 * dlistint_len - gets the length of a dlist
 * @h: the first node of dlist
 * Return: the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *currrent;
	int size = 0;

	currrent = h;
	while (currrent)
	{
		size++;
		currrent = currrent->next;
	}

	return (size);
}
