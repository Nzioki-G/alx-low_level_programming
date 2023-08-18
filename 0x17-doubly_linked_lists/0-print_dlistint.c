#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: the head node of dlist
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;
	const dlistint_t *current;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		size++;
		current = current->next;
	}

	return (size);
}