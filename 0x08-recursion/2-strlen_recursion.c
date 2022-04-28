#include "main.h"

/**
  * _strlen_recursion - finds length of string w. recursion
  * @s: the string to count
  * Return: length of string
  */
int _strlen_recursion(char *s)
{
	int length = 0;

	/* when you get to the end */
	if (!s[length])
		return (0);
	length++;

	/* call the fn with 1 less char */
	return (length + _strlen_recursion(&s[length]));
}
