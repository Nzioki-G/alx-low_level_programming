#include "main.h"

/**
  * _memcpy - copies a memory area
  * @dest: place to paste
  * @src: make a copy of this
  * @n: number of bytes to copy
  * Return: pointer to destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	/* loop until n */
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
