#include "lists.h"

/**
 * get_nodeint_at_index - gets node at given index
 * @head: first node of list
 * @index: position of node to find
 * Return: node at index on success else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	/**
	 * conditions for looping:
	 * a.) i <= index
	 * b.) head(currentNode) != null
	 */
	while (i <= index && head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
