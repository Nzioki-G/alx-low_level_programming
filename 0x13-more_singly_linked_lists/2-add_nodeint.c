#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: the list
 * @n: the value to add
 *
 * Return: list on success else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	/* populate the new elemnt */
	new->n = n;
	new->next = *head;

	*head = new;
	return (*head);
}
