#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: first node in list
 * @index: the 0-based position in list
 *
 * Return: node on success, NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);

		if (i > index)
			return (NULL);
		head = head->next;
		i++;
	}

	/* index out of bound */
	return (NULL);
}
