#include "main.h"

/**
  * _strcpy - copies string into another
  * @dest: the place to copy
  * @src: the string to be copied
  * Return: pointer to destination after copying
  */
char *_strcpy(char *dest, char *src)
{
	int length = 0, i;

	/* get length of src */
	while (src[length])
		length++;

	/* copy to destination char by char */
	for (i = 0; i < length + 1; i++)
		dest[i] = src[i];

	return (dest);
}
