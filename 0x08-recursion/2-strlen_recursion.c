#include "main.h"

/**
  * _strlen_recursion - finds length of string w. recursion
  * @s: the string to count
  * Return: length of string
  */
int _strlen_recursion(char *s)
{
	/* when you get to the end */
	if (!s[0])
		return (0);
	/* call the fn with 1 less char */
	return (1 + _strlen_recursion(&s[1]));
}
