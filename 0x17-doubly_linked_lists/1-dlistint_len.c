#include "lists.h"

/**
 * dlistint_len - gets the length of a doubly linked list
 * @h: the first node of said list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
