#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: size of the array of the hash_table
 * Return: index of key in the ht_array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	/* trim to fit is array of size */
	index %= size;

	return (index);
}
