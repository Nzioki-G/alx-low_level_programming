#include "lists.h"

/**
 * find_listint_loop - finds the loop in the linked list
 * @head: first node of the list
 *
 * Return: pointer to node where loop starts if loop otherwise NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	/* empty case */
	if (!head || !head->next)
		return (NULL);

	while (slow)
	{
		slow = slow->next;
		fast = !fast->next ? NULL : fast->next->next;
		if (!fast)
			break;
		printf("==>%d, %d\n", slow->n, fast->n);

		/* there's a point where the 2 pointers meet */
		if (fast == slow)
		{
			slow = head;

			/* head to loop == meet_point to loop */
			while (slow && fast && fast->next)
			{
				slow = slow->next;
				fast = fast->next;
				if (fast == slow)
					return (fast);
			}
		}
	}
	return (NULL);
}
