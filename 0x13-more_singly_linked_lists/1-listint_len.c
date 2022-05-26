#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list
 * @h: the first node of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	/* for an empty case */
	if (!h)
		return (0);

	while (h)
	{
		count++;
		h = h->next; /* advance head pointer to the next node */
	}
	return (count);
}
