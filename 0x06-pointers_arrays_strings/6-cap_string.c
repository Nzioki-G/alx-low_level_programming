#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @str: string to be manipulated
  *
  * Return: string post manipulation
  */
char *cap_string(char *str)
{
	int index = 0;

	/* loop through string upto null terminator */
	while (str[index])
	{
		char c = str[index];
		/* meet a space, ., \n or tab capitalize next letter */
		if (c == 44 || c == 46 || c == 63 || (c >= 1 && c <= 34)
|| c == 59 || c == 40 || c == 41 || c == 123 || c == 125)
		{
			/* check for lower case first */
			if (str[index + 1] >= 97 && str[index + 1] <= 122)
				str[index + 1] -= 32;
			index++;
			continue;
		}
		index++;
	}
	return (str);
}
