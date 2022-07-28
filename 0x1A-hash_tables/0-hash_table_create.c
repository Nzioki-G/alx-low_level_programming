#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of given size
 * @size: the size of the array ht is built upon
 *
 * Return: HT on success, NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* create an array for nodes */
	hash_node_t **array;
	hash_table_t *new_ht;
	unsigned long int i = 0;

	/* allocate memo for the array */
	array = malloc(size * sizeof(hash_node_t *));
	if (!array)
		return (NULL);

	/* allocate mem for hash table */
	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
	{
		free(array);
		return (NULL);
	}

	/* init the ht */
	new_ht->size = size;
	new_ht->array = array;
	if (!new_ht)
	{
		free(new_ht->array);
		free(new_ht);
		return (NULL);
	}
	/* once we've created the ht, init its array */
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	return (new_ht);
}
