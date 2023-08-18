#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: first node of the list
 * @index: position to delete at
 * Return: 1 on seccess else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;


	if (!*head)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		else
			*head = NULL;
	}

	current = *head;
	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	if (!current)
		return (-1);
	if (current->next)
		current->next->prev = current->prev;
	if (current->prev)
		current->prev->next = current->next;

	return (1);
}