#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: first node of dlist
 * @index: the position of node to find
 * Return: address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = head;
	while (count < index && current)
	{
		count++;
		current = current->next;
	}
	return current;
}
