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

	n = (n > len2) ? len2 : n;/* use lesser of strlen & n */

	/* allocate mem for new string */
	if ((len1 + n) != 0)
		snew = malloc((sizeof(char) * (len1 + n)) + 1);

	if (snew) /* check if malloc worked */
	{
		if (s1)
			strcpy(snew, s1);

		if (s2)
		{
			x = 0;
			for (i = len1; i < (n + len1); i++)
			{
				snew[i] = s2[x];
				x++;
			}
			snew[i] = '\0';
		}
		/* if we did add something, terminate */
		if (snew)
			strcat(snew, "\0");

		return (snew);
	}
	else
		return (NULL);
}
