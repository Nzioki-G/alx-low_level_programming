#include "main.h"

/**
  * _strpbrk - searches a string for any char in a set of bytes
  * @s: the string within which to search
  * @accept: the set of bytes to search for
  * Return: a pointer to the byte in s that matches a byte in accept
  */
char *_strpbrk(char *s, char *accept)
{
	int in_s = 0, in_a;
	char *ptr_to_match = NULL;

	/* loop through s to the end */
	while (s[in_s])
	{
		/* search for char "s[in_s]" in "accept" */
		for (in_a = 0; accept[in_a]; in_a++)
		{
			/* find a match, get its address, break */
			if (s[in_s] == accept[in_a])
			{
				ptr_to_match = &s[in_s];
				return (ptr_to_match);
			}
		}
		in_s++;
	}
	return (ptr_to_match);
}
