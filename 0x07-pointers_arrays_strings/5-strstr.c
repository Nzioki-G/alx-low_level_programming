#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: the parent string
  * @needle: string to be located
  * Return: pointer to needle if found else NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int h = 0, n = 0;

	/* loop through haystack */
	while (haystack[h])
	{
		/* search for first char of needle in hasystack */
		if (haystack[h] == needle[0])
			break;
		h++;
	}

	while ((haystack[h] == needle[n]) && haystack[h] && needle[n])
	{
		/* if they match to end, it's a substring */
		if (!(needle[n + 1]))
			return (needle);
		h++;
		n++;
	}

	return (NULL);
}
