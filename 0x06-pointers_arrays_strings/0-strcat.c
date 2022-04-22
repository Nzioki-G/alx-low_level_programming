#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: the place to add
  * @src: the string to append
  * Return: pointer to destination string
  */
char *_strcat(char *dest, char *src)
{
	int index = 0, count = 0;

	/* loop the destination string to \0 */
	while (dest[index])
	{
		index++;
	}

	/* write into dest overwriting the \0 */
	while (src[count])
	{
		dest[index] = src[count];
		index++;
		count++;
	}

	/* add the terminating null byte */
	dest[index] = src[count];
	return (dest);
}
