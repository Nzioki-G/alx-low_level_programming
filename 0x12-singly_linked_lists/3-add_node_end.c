#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: first node in the list
 * @str: element value
 *
 * Return: pointer to inserted node / NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *name = strdup(str);
	list_t *add_me, *tail;

	add_me = malloc(sizeof(list_t));

	if (!add_me) /* if malloc failed */
		return (NULL);

	if (!name) /* malloc success but struct is empty */
	{
		free(add_me);
		return (NULL);
	}

	add_me->str = name;
	add_me->len = strlen(name);
	add_me->next = NULL;

	/* if list is empty */
	if (*head == NULL)
		*head = add_me;
	else
	{
		tail = *head;
		while (tail->next) /* while node isn't null */
		{
			tail = tail->next;
		}
		/* once we're at the end, insert new node */
		tail->next = add_me;
	}

	return (*head);
}
