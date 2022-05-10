#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocate memory using malloc & free
  * @ptr: pointer to prev mem-alloc'd
  * @old_size: byte size of ptr
  * @new_size: byte size of mem to be re-alloc'd
  * Return: newly appointed mem block
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, n;
	void *mem;
	char *ar;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		mem = malloc(new_size);
		if (mem)
		{
			ar = mem;
			for (i = 0; i < new_size; i++)
				ar[i] = i;
			return (mem);
		}
		return (NULL);
	}
	if (ptr && !new_size)
	{
		free(ptr);
		return (NULL);
	}
	n = (new_size < old_size) ? new_size : old_size;
	mem = malloc(new_size);
	if (!mem)
		return (NULL);

	ar = mem;
	for (i = 0; i < n; i++)
	{
		ar[i] = i;
	}
	return (mem);
}
