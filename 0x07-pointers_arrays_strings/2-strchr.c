#include "main.h"

/**
  * _strchr - locates a chr in string
  * @s: the string in consideration
  * @c: the char to locate
  * Return: pointer to first occurrence of c or NULL if c isn;t found
  */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr_to_c = NULL;

	/* loop to the end of string s */
	while (s[i])
	{
		/* if you find a match, point to its address in memory */
		if (s[i] == c)
		{
			ptr_to_c = &s[i];
			break;
		}
		i++;
	}

	return (ptr_to_c);
}
