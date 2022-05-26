#include "lists.h"

/**
 * add_nodeint_end - adds a ode to the end of linked list
 * @head: double pointer to the first node
 * @n: value of element
 *
 * Return: pointert to new element on success otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	/* populate new */
	new->n = n;
	new->next = NULL;

	/* if list is empty */
	if (!*head)
		*head = new;
	else
	{
		/* navigate to last element */
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
