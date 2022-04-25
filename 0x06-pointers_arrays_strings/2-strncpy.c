#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: destination to be copied to
  * @src: string to be copied
  * @n: number of bytes to copy
  * Return: pointer to destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* write into dest on n spaces */
	/* while src has actual data, copy */
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	/* if src is terminated but dest persist, put null into dest */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
