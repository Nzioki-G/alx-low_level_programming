#include "main.h"

/**
  * str_concat - concatenates 2 strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to memo location of new s1-s2-\0
  */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, i, j;
	char *new_str;

	/* if null is passed length==0 */
	n1 = s1 ? strlen(s1) : 0;
	n2 = s2 ? strlen(s2) : 0;

	/* allocate s1 + s2 + 1 for \0 memory */
	new_str = malloc(((n1 + n2) * sizeof(char)) + 1);

	/* check if malloc worked */
	if (new_str)
	{
		for (i = 0; i < n1; i++)
		{
			/* first paste s1 */
			new_str[i] = s1[i];
		}
		for (j = 0; j < n2; j++)
		{
			/* paste s2 ignoring the null byte */
			new_str[i] = s2[j];
			i++;
		}
		/* add the null byte */
		new_str[i] = '\0';
		/* return conctatenated string */
		return (new_str);
	}
	else
		return (NULL);
}
