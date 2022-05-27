#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: double pointer to the first node
 * @idx: the position to add
 * @n: the element value of node being inserted
 * Return: pointer to node inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *add_me, *current, *temp;

	add_me = malloc(sizeof(listint_t));

	if (!add_me)
		return (NULL);

	else
	{
		add_me->n = n;
		/* if we're inserting at the head */
		if (idx == 0)
		{
			add_me->next = *head;
			*head = add_me;
		}
		else
		{
			current = *head;
			while (i < idx)
			{
				if (!current) /* we reach the end && i<index */
					return (NULL);
				current = current->next;
				i++;
			}
			/* when we reach the desired location */
			temp = current->next; /* temp holds i+1 */
			add_me->next = temp; /* addme points i as next */
			current->next = add_me;
			/* ==> current --> add_me --> current.next */
			return (add_me);
		}
	}
	/* if we get here, then something didn't go well */
	return (NULL);
}
