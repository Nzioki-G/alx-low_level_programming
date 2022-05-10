#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * string_nconcat - concats 2 strings
  * @s1: the destination string
  * @s2: the source string
  * @n: first bytes of s2 to be copied
  * Return: pointer to space in memory allocated for s1 and 1st n bytes of s2
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, x;
	char *snew;

	/* get the length of both strings */
	len1 = (s1) ? strlen(s1) : 0;
	len2 = (s2) ? strlen(s2) : 0;

	/* if n > len2, use strlen as n */
	n = (n > len2) ? len2 : n;

	/* allocate mem for new string */
	snew = malloc((sizeof(char) * (len1 + n)) + 1);

	/* check if malloc worked */
	if (snew)
	{
		strcpy(snew, s1);
		x = 0;
		for (i = len1; i < (n + len1); i++)
		{
			snew[i] = s2[x];
			x++;
		}
		snew[i] = '\0';
		return (snew);
	}
	else
	{
		return (NULL);
	}
}
