#include "lists.h"

/**
 * sum_dlistint - adds all data in a dlist
 * @head: the first node of dlist
 * Return: sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
