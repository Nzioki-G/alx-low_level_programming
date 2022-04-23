#include "main.h"
#include <ctype.h>

/**
  * rot13 - encodes characters a-m = n-z
  * @str: test string
  * Return: string poust manipulation
  */
char *rot13(char *str)
{
	int index = 0;

	/* loop to terminator */
	while (str[index])
	{
		/* if it's an alphabetic character.. */
		if (isalpha(str[index]))
		{
			/* if its a-mA-M */
			if((str[index] >= 97 && str[index] <= 109) || (str[index] >= 65 && str[index] <= 77))
				str[index] += 13;
			/* else its n-zN-Z */
			else
				str[index] -= 13;
		}
		index++;
	}

	return (str);
}
