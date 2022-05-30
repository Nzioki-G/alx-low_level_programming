#include "lists.h"

/**
 * removeloop - removes a loop in a list
 * @first: head of the list
 * @loopy: point in list where there is a loop
 * Return: nothing
 */
void removeloop(const listint_t *first, listint_t *loopy)
{
	listint_t *ptr = loopy;

	while (1) /* no condition needed as we'll break out */
	{
		while (ptr->next != first && ptr->next != loopy)
		{
			ptr = ptr->next;
		}
		if (ptr->next == first)
			break;

		first = first->next;
		ptr = loopy;
	}
	/* we have the two nodes that form a loop: break it */
	ptr->next = NULL;
}

/**
 * print_listint_safe - prints a list (might be looped: a node points
 * to a previously visited node)
 * @head: the first item on the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	listint_t *slow, *fast;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		slow = head->next;
		fast = head->next->next;
		if (slow == fast)
		{
			/* we have a loop */
			removeloop(head, slow);
		}
		head = head->next;
		i++;
	}
	printf("i=%d\n", i);
	return (i);
}
