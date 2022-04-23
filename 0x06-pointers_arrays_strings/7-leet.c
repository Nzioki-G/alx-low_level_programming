#include "main.h"

/**
  * leet - encodes characters with their look alikes
  * @str: string to manipulate
  *
  * Return: string post manipulation
  */
char *leet(char *str)
{
	int index = 0, i;
	/* an array of lower case letter and its match next */
	int match[] = {97, 52, 101, 51, 111, 48, 116, 55, 108, 49};


	/* loop through checking for a,e,o,t,l */
	while (str[index])
	{
		for (i = 0; i < 10; i += 2)
		{
			/* compare character in array_match and string_str */
			if (str[index] == match[i] || str[index] == (match[i] - 32))
				str[index] = match[i + 1];
		}
		index++;
	}
	return (str);
}
