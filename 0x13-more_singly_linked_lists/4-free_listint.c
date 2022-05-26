#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the first element
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next; /* hold the next */
		free(head); /* free current */
		head = temp; /* redefine current */
	}
}
