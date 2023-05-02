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
	const listint_t *slow = head, *fast = head;

	if (!head)
		exit(98);

	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		if (fast)
			fast = fast->next ? fast->next->next : NULL;
		i++;
		if (slow == fast) /* clash point */
		{
			slow = head;
			break;
		}

	}

	/* we have a loop */
	while (slow && fast && slow != fast)
	{
		printf("[%p] %d\n", (void *)fast, fast->n);
		slow = slow->next;
		fast = fast->next;
		i++;
	}
	printf("count: %d\n", i);
	return (i);
}
