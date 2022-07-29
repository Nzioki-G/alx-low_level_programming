#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to be updated
 * @key: a NON-EMPTY string
 * @value: the key's associated pair, can be empty
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t **array = ht->array, *new_pair = NULL, *current;

	/* create the new node with k/v */
	new_pair = malloc(sizeof(hash_node_t));
	if (!new_pair || (key[0] == '\0'))
		return (0);

	new_pair->key = strdup(key);
	new_pair->value = strdup(value);
	new_pair->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	current = array[index];

	if (current == NULL)
	{
		current = new_pair;
	}
	else
	{
		/* navigate to an empty slot */
		while (current->next)
		{
			current = current->next;
		}
		/* insert */
		current->next = new_pair;
	}
	return (1);
}
