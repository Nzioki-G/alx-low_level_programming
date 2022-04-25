#include "main.h"
#include <ctype.h>

/**
  * rot13 - encodes characters a-m = n-z
  * @str: test string
  * Return: string poust manipulation
  */
char *rot13(char *str)
{
	int index = 0, i, ch;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	/* loop to terminator */
	while (str[index])
	{
		ch = str[index];
		/* check for alphabetic characters */
		for (i = 0; i < 52; i++)
		{
			/* when you get a match, rot13 it then quit looping */
			if (ch == alphabet[i])
			{
				str[index] = rot13[i];
				continue;
			}
		}
		index++;
	}

	return (str);
}
