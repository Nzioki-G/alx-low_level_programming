#include "main.h"
#include <string.h>

/**
  * set_string - sets the value of a pointer to a char
  * @s: the double pointer to source string
  * @to: the pointer to the destination string
  * Return: nothin'
  */
void set_string(char **s, char *to)
{
	*s = to;
}
