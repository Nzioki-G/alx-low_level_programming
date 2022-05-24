#include "lists.h"

/**
 * list_len - counts number of elements in list
 * @h: pointer to first elemnt
 *
 * Return: length
 */
size_t list_len(const list_t *h)
{
	int length = 0;

	while (h) /* as long as the node isn't null */
	{
		length++;
		h = h->next;
	}
	return (length);
}
