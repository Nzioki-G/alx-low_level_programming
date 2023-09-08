#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the ht to retrieve from
 * @key: the key to look for
 * Return: associated value or NULL on fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	/* get the index in array */
	index = key_index((const unsigned char *)key, ht->size);

	/* search for key in each node in linkedIlist @index */
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
