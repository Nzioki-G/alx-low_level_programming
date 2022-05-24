#include "lists.h"

/**
 * add_node - appends a node at the beggining
 * @head: pointer to pointer to head
 * @str: string val at each node
 *
 * Return: pointer to new node(struct) / NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	/* our struct takes: str, len, *next */
	char *name = strdup(str);
	unsigned int length = strlen(name);
	list_t *new;

	new = malloc(sizeof(list_t));

	if (!new) /* malloc failed */
	{
		return (NULL);
	}

	if (!name) /* struct elemnt is empty */
	{
		free(new);
		return (NULL);
	}

	/* if we've allocated memory successfully... */
	new->str = name;
	new->len = length;
	new->next = *head; /* new points to previously first enrty */

	/* new is promoted to first place */
	*head = new;

	return (new);
}
