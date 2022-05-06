#include "main.h"

/**
  * _strdup - m_allocate and paste given string
  * @str: string to copy into malloc'ed
  * Return: pointer to allocated memory
  */
char *_strdup(char *str)
{
	int i, n;
	char *dupe;
	/* if str == NULL */
	if (!str)
	{
		return (NULL);
	}

	n = strlen(str);
	dupe = malloc(n * sizeof(char));

	/* confirm it malloc'ed */
	if (dupe)
	{
		/* copy the str into dupe */
		for (i = 0; i < n; i++)
		{
			*(dupe + i) = *(str + i);
		}
		return (dupe);
	}
	else
		return (NULL);
}
