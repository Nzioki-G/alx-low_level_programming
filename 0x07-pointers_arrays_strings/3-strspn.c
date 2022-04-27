#include "main.h"

/**
  * _strspn - gets the length of substring in string
  * @s: the parent string
  * @accept: the child/substring
  * Return: number of bytes found
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, length = 0, old_length;

	/* for each char in s */
	while (s[i])
	{
		old_length = length;
		for (j = 0; accept[j]; j++)
		{
			/* check for match */
			if (s[i] == accept[j])
			{
				length++;
			}
		}
		/* if nothing matched, break */
		if (length == old_length)
			break;
		i++;
	}

	return (length);
}
