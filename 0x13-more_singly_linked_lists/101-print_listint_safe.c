#include "lists.h"

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
	listint_t *slow = head->next, *fast = head->next;

	if (!head)
		return (0);
	printf("[%p] %d\n", (void *)head, head->n); /* print 1st */
	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) /* clash point */
		{
			/* we have a loop */
			while (1)
			{
				/* if we get to beginning of loop */
				if (slow->next == head)
				{
					printf("[%p] %d\n", (void *)slow, slow->n);
					slow->next = NULL;
					break;
				}
				while (slow->next != fast && slow->next != head)
					slow = slow->next;
				head = head->next;/* increment head */
				slow = fast; /* reset slow to clash point */
			}
		}
		i++;
	}
	while (slow) /* if no loop, then we exited before end of list */
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		i++;
	}
	return (i);
}
