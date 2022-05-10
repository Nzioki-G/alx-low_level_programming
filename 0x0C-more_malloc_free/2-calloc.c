#include "main.h"
#include <stdlib.h>

/**
  * _calloc - malloc'ates memory for an array
  * @nmemb: the number of array elements
  * @size: the sizeof bytes per element in array
  * Return: pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ar;
	void *mem;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	/* allcate the mem */
	mem = malloc(nmemb * size);

	/* confirm mem was allocated */
	if (mem)
	{
		ar = mem;
		for (i = 0; i < nmemb; i++)
		{
			/* initialize with 0 */
			ar[i] = '\0';
		}
		return (mem);
	}
	return (NULL);
}
