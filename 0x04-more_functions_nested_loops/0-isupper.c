#include "main.h"

/**
  * _isupper - checks if arg is upper case letter
  * @c: the character passed in number format
  * Return: 1 true, 0 false
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
