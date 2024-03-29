#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: ptr to the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* empty case */
	if (!*head)
	{
		free(*head);
		*head = NULL;
		return;
	}

	while (*head)
	{
		temp = (*head)->next; /* hold next link */
		free(*head); /* free current */
		*head = temp; /* advance to next */
	}
	*head = NULL;
}
