#include "lists.h"

/**
 * sum_listint - calculates sum of all the element values
 * @head: the first node of hte list
 *
 * Return: sum on success else 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
