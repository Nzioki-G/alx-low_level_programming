#include "main.h"

/**
  * _atoi - converts a string to an int
  * @s: the string to be converted
  * Return: int value of string
  */
int _atoi(char *s)
{
	int index = 0, integer = 0, negative_flag = 0;

	/* go through string */
	while (s[index])
	{
		/* if you meet a number */
		if (s[index] >= 48 && s[index] <= 57)
		{
			/* break with the index at hand */
			break;
		}
		index++;
	}

	/* if the previous place is valid, check for negative sign */
	if (s[index - 1] && s[index - 1] == 45)
	{
		negative_flag = 1;
	}

	/* collect all adjacent numbers */
	while (s[index] >= 48 && s[index] <= 57)
	{
		integer = (integer * 10) + (s[index] - 48);
		index++;
	}

	/* if the number is -ve, *-1 */
	if (negative_flag)
		integer *= -1;

	return (integer);
}
