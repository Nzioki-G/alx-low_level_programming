#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the string to use to generate index
 * @size: the size of the array
 *
 * Return: index in array to store a key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	/* get the hash val of key */
	hash = hash_djb2(key);

	/* generate index that's within range of size */
	index = hash % size;

	return (index);
} 
