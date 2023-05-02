#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: the list
 *
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t i = 0, count;

	if (!*h)
		return (0);

	count = find_list_length(*h);

	/* find and remove loop */
	while (i <= count)
	{
		tmp = current->next;
		free(current);
		current = tmp;
		i++;
	}

	*h = NULL;
	return (count);
}

/**
 * find_list_length - gets the length of list regardless of loop
 * @head: first node of list
 * Return: length of list
 */
size_t find_list_length(listint_t *head)
{
	listint_t *current = head, *fore = head;
	size_t len = 0;

	while (current)
	{
		current = current->next;
		len++;
		if (fore)
			fore = !fore->next ? NULL : fore->next->next;
		if (current == fore)
		{
			current = head;
			while (current != fore)
			{
				current = current->next;
				fore = fore->next;
				len++;
			}
			break;
		}
	}
	return (len);
}
