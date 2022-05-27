#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: double pointer to the first node
 * @idx: the position to add
 * @n: the element value of node being inserted
 *
 * Return: pointer to node inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *add_me, *current_node, *temp;

	add_me = malloc(sizeof(listint_t));

	if (!add_me)
		return (NULL);

	else
	{
		current_node = *head;
		while (current_node)
		{
			if (i == idx)
			{
				/*
				 * link to previous node => current
				 * link to next => current.next
				 */
				temp = current_node->next; /* link to next */
				add_me->n = n;
				add_me->next = temp; /* set next node */
				current_node->next = add_me; /* current => new => temp */
				return (current_node);
			}
			i++;
			current_node = current_node->next;
		}
	}
	/* if we get here, then something didn't go well */
	return (NULL);
}
