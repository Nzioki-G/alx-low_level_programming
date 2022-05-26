#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: the first node of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	/* for an empty case */
	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n); /* print value */
		h = h->next; /* advance head pointer to the next node */
		count++;
	}
	return (count);
}
