#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: the list
 *
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp, *fore;
	size_t count = 0;

	current = *h;
	fore = *h;

	/* find and remove loop */
	while (current->next)
	{
		if (fore)
			fore = !fore->next ? NULL : fore->next->next;
		tmp = current->next;
		free(current);
		current = tmp;
		count++;

		/* deal with a looping list */
		if (current && current == fore)
		{
			fore = *h;
			while (current != fore)
			{
				tmp = current->next;
				free(current);
				current = tmp;
				fore = fore->next;
				count++;
			}
			break;
		}
	}
	*h = NULL;
	return (count);
}
