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

	if (!nmemb || !size)
	{
		return (NULL);
	}

	/* allcate the mem */
	ar = malloc(nmemb * size);

	/* confirm mem was allocated */
	if (ar)
	{
		for (i = 0; i < nmemb; i++)
		{
			/* initialize with 0 */
			ar[i] = '\0';
		}
		return (ar);
	}
	return (NULL);
}
