#include "main.h"

/**
  * set_string - sets the value of a pointer to a char
  * @s: the double pointer to source string
  * @to: the pointer to the destination string
  * Return: nothin'
  */
void set_string(char **s, char *to)
{
	int i = 0;

	/* loop to the end of "to" */
	while (to[i])
	{
		s[i] = &to[i];
		i++;
	}

	/* terminate **s in all its non-null spaces */
	while (s[i] && !to[i])
	{
		s[i] = '\0';
		i++;
	}
}
