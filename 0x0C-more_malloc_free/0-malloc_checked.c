#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory
  * @b: the size of memory to allocate
  * Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *mem;
	/* allocate b bytes of memory */
	mem = malloc(b);

	/* check that malloc worked */
	if (mem != NULL)
	{
		return (mem);
	}
	else
	{
		exit (98);
	}
}
