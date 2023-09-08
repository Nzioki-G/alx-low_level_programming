#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the length of the array
 * Return: pointer to new hash_table, NULL on failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	/* create an array of nodes */
	hash_node_t *hash_node, **array;
	/* hash table */
	hash_table_t *new_ht;
	unsigned long int idx;

	array = malloc(sizeof(hash_node) * size);
	if (!array)
		return (NULL);
	new_ht = malloc(sizeof(array) + sizeof(unsigned long int));
	if (new_ht == NULL)
	{
		free(array);
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
	{
		/* init all node_slots to NULL */
		array[idx] = NULL;
	}
	new_ht->size = size;
	new_ht->array = array;

	return (new_ht);
}
