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
	if (!head)
	{
		return (NULL);
	}

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow) /* if there exists a loop */
		{
			while (1) /* true or break */
			{
				if (slow->next == head)
					return (head);

				while (slow->next != fast &&
slow->next != head)
					slow = slow->next;

				head = head->next; /* increment head */
				slow = fast;/* re-set slow to point of clash */
			}
		}
	}
	/* no loop found */
	return (NULL);
}
