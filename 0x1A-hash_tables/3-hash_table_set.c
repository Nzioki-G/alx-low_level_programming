#include "hash_tables.h"

/**
 * hash_table_set - adds/updates an element in the hash_table
 * In case of collision, add the new node at the beginning of the list
 * @ht: the hash_table to insert into
 * @key: the element's key
 * @value: the element's value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	/* create the new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node || strlen(key) == 0)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/* get the index to insert into */
	index = key_index((const unsigned char *)key, ht->size);

	/* insert at head of index's linked list */
	if (ht->array[index] == NULL)
	{
		/* insert a pioneering node */
		ht->array[index] = new_node;
	}
	else
	{
		/* check if node already exists */
		current = ht->array[index];
		while (current)
		{
			/* update value; no insertion */
			if (strcmp(current->key, key) == 0)
			{
				current->value = strdup(value);
				free(new_node);
				return (1);
			}
			current = current->next;
		}
		/* insert a joining node */
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
