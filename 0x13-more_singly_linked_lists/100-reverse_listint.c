#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the first node
 *
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *temp;

	if (!*head)
		return (NULL);

	while ((*head)->next)
	{
		temp = (*head)->next; /* link to next */
		(*head)->next = prev; /* point current to prev */
		prev = *head; /* set current node as prev for next iteration */
		*head = temp; /* advance to next */
	}
	return (*head);
}
