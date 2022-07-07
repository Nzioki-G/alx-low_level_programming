#include "lists.h"

/**
 * sum_dlistint - gets sum of elements in list
 * @head: first node of list
 *
 * Return: total sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
