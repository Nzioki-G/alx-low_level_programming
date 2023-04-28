#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to the list
 *
 * Return: data of node removed on success else 0
 */
int pop_listint(listint_t **head)
{
	int val = 0;		/* default return 0 */
	listint_t *temp;

	if (!*head)
		return (0);

	val = (*head)->n;	/* the value to return */
	temp = (*head)->next;	/* hold the 2nd node */
	free(*head);		/* free first node */
	*head = temp;		/* break the link */

	return (val);
}
