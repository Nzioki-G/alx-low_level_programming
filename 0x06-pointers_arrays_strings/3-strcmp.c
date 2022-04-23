#include "main.h"

/**
  * _strcmp - compares 2 strings
  * @s1: first string
  * @s2: 2nd string
  * Return: 0 for same, -x for less and x for more
  */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	/* loop as long as string values @ index are a match */
	while ((s1[index] - s2[index]) == 0)
	{
		/* if you hit the terminate in both strings, quit */
		if (!s1[index] && !s2[index])
			break;
		index++;
	}

	/* return difference in values of char at index in either string */
	return (s1[index] - s2[index]);
}
