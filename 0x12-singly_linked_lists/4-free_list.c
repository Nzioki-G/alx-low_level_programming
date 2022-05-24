#include "lists.h"

/**
 * free_list - frees a list of its elemnts
 * @head: the first element of list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	/* link to next */
	list_t *temp = head;

	while (temp) /* until null */
	{
		temp = head->next;

		free(head->str); /* free name */
		free(head); /* free the struct */

		head = temp;
	}
}
