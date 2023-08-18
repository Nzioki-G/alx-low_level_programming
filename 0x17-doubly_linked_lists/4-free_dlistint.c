#include "lists.h"

/**
 * free_dlistint - frees a dlist
 * @head: first node of dlist
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (current)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
