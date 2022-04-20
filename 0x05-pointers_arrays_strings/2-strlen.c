#include "main.h"

/**
  * _strlen - calculates the length of a string excluding \0
  * @s: the pointer to the string
  * Return: length of string
  */
int _strlen(char *s)
{
	int count = 0;

	/**
	  * s[0] is the int val of first element in the string
	  * NUL is 0 in ascii and false in logic
	  * therefore, while true...
	  */
	while (s[count])
		count++;

	return (count);
}
