#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: the parent string
  * @needle: string to be located
  * Return: pointer to needle if found else NULL
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned long int h = 0, n = 0;
	char *substring;

	/* edge case: empty string */
	if (strlen(needle) == 0)
		return (needle);

	/* loop through haystack */
	while (haystack[h])
	{
		/* search for first char of needle in hasystack */
		if (haystack[h] == needle[0])
			break;
		h++;
	}
	if (h == strlen(haystack))
		return (NULL);

	while ((haystack[h] == needle[n]) && haystack[h] && needle[n])
	{
		/* if they match to end, it's a substring */
		h++;
		n++;
		if (!(needle[n]))
		{
			substring = needle;
			return (substring);
		}
	}

	return (NULL);
}
