#include "lists.h"

/**
 * add_dnodeint_end - inserts node at tail
 * @head: first node
 * @n: data for node to insert
 *
 * Return: pointer to inserted node on success NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* empty case */
	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	/* loop to the end */
	while (current->next)
	{
		current = current->next;
	}
	/* at the end, instead of pointing to NULL, point to new_node */
	current->next = new_node;
	new_node->prev = current;

	/* you return last, by returning first, by default */
	return (*head);
}
