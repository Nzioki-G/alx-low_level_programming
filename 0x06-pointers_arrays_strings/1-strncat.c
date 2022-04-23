#include "main.h"

/**
  * _strncat - concatenates 2 strings
  * @dest: string to copy to
  * @src: string to copy
  * @n: number of bytes to copy from source string
  * Return: pointer to destination string
  */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, count = 0;

	/* get to the end of dest */
	while (dest[index])
		index++;

	/* copy n characters from src string */
	while (count < n)
	{
		/* if you hit the null terminator in src, quit */
		if (!src[count])
			break;
		dest[index] = src[count];
		index++;
		count++;
	}
	return (dest);
}
