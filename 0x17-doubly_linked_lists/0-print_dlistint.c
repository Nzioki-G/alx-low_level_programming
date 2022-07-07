#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: the head node of said list
 *
 * Return: the size of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
