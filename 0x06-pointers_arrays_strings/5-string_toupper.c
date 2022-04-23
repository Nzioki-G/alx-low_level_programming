#include "main.h"

/**
  * string_toupper - changes all lowercase chars to uppercase
  * @str: string under consideration
  * Return: string after change
  */
char *string_toupper(char *str)
{
	int index = 0;

	/* loop upto null terminator */
	while (str[index])
	{
		/* when you meet lowercase, convert */
		if (str[index] >= 97 && str[index] <= 122)
			str[index] -= 32;
		index++;
	}
	return (str);
}
