#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: double pointert to the first node
 * @index: index of node to delete
 *
 * Return: 1 on success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp, *node;

	if (!*head)
		return (-1);

	node = *head;
	if (index == 0)
	{
		free(*head);
		*head = node->next;
		return (1);
	}
	else
	{
		while (i < index)
		{
			if (!node->next)
				return (-1);

			node = node->next;
			i++;
		}
		/* i == (index-1) coz i started at 1 & idx @ 0*/
		if (i == index)
		{
			temp = node->next->next;
			free(node->next);
			node->next = temp;
			return (1);
		}
	}
	return (-1);
}
