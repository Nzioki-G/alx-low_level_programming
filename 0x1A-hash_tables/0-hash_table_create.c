#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of given size
 * @size: the size of the array ht is built upon
 *
 * Return: HT on success, NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* create an array of nodes */
	hash_node_t **array;
	hash_table_t *new_ht;

	/* allocate memo for the array */
	array = malloc(size);
	if (!array)
		return (NULL);

	/* allocate mem for hash table */
	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);

	/* init the ht */
	new_ht->size = size;
	new_ht->array = array;
	return (new_ht);
}
