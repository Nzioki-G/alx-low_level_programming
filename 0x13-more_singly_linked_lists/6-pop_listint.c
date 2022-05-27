#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: double pointer to first element
 *
 * Return: data of head node on success else 0
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head; /* hold first */
	*head = temp->next; /* set 2nd as first */

	/* if the next val exists */
	if (*head)
	{
		val = temp->next->n;
		free(temp);
		return (val);
	}
	else
		return (0);
}
