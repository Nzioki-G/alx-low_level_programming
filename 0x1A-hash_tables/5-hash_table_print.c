#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int isFirst = 1;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		/* empty ht slot */
		if (ht->array[index] == NULL)
			continue;
		/* print the list in this slot */
		current = ht->array[index];
		while (current)
		{
			if (isFirst)
			{
				printf("\'%s\': \'%s\'", current->key, current->value);
				isFirst = 0;
			}
			else
				printf(", \'%s\': \'%s\'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}