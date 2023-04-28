#include "lists.h"

/**
 * add_nodeint_end - adds a ode to the end of linked list
 * @head: pointer to the list
 * @n: value of new node
 *
 * Return: list with new element on success otherwise NULL
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
	{
		*head = new;
		return (*head);
	}

	/* navigate to last element */
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (*head);
}
