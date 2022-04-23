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
	int index = 0;

	/* copy 0-n chars to destination assuming it was empty */
	while (index < n)
	{
		/* if you meet the terminator in src, quit copying */
		if (!src[index])
		{
			/* place the terminator at the end of string dest */
			dest[index] = src[index];
			break;
		}
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
