#include "main.h"

/**
  * create_array - creates a character array & initializes
  * @size: the size of the array
  * @c: the charatcer to initialize this array
  * Return: pointer to array (NULL if size==0)
  */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	/* if the size is 0, point to null */
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		/* allocate size * 1 of memo */
		ar = malloc(size * sizeof(char));

		/* check if memory isn't null */
		if (ar)
		{
			for (i = 0; i < size; i++)
			{
				ar[i] = c;
			}
			return (ar);
		}
		else
			return (ar);
	}
}
