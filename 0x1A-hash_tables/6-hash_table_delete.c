#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *head, *current;

	/* free each linked list in the ht_array */
	for (index = 0; index < ht->size; index++)
	{
		head = ht->array[index];
		if (head)
		{
			while (head)
			{
				current = head;
				head = head->next;
				free(current->key);
				free(current->value);
				free(current);
			}
		}
		free(head);
	}
	/* free the ht_array */
	free(ht->array);
	free(ht);
}
