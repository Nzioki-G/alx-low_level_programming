#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @str: string to be manipulated
  *
  * Return: string post manipulation
  */
char *cap_string(char *str)
{
	int index = 0, i;
	int array[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	/* loop through string upto null terminator */
	while (str[index])
	{
		char ch = str[index];

		/* if the first-most ch islower */
		if (index == 0 && (ch >= 97 && ch <= 122))
			str[index] -= 32;

		/* meet a space, ., \n or tab capitalize next letter */
		for (i = 0; i < 13; i++)
		{
			if (ch == array[i])
			{
				/* check if lower case b4 converting */
				if (str[index + 1] >= 97 && str[index + 1] <= 122)
				{
					str[index + 1] -= 32;
					index++;
					continue;
				}
			}
		}
		index++;
	}
	return (str);
}
