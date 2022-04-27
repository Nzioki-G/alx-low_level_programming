#include "main.h"

/**
  * _strspn - gets the length of substring in string
  * @s: the parent string
  * @accept: the child/substring
  * Return: number of bytes found
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, length = 0;

	/* loop to end of s */
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				i++;
			}
			else
				return (length);
		}
		i++;
	}
	return (length);
}
