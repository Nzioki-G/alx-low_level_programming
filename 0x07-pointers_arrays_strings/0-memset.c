#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: pointer to the memory are to be filled
  * @b: the constant byte
  * @n: the size of the memory area to be filled
  * Return: pointer to s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	/* loop until n */
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
