#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to first element of list (HEAD?)
 *
 * Return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		/* add number of nodes */
		i++;

		/* advance to next node */
		h = h->next;
	}
	return (i);
}
