#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of args
 * @av: array of args
 * Return: pointer to new str or NULL on fail
 */
char *argstostr(int ac, char **av)
{
	char *args_string;
	int i, len = 0, new = 0, arg;
	unsigned long int j;

	if (ac == 0 || !av)
		return (NULL);

	/* get total length of args */
	for (i = 0; i < ac; i++)
		len += strlen(av[i]);
	len += (ac + 1);
	args_string = malloc(len * sizeof(char));

	for (arg = 0; arg < ac; arg++)
	{
		for (j = 0; j < strlen(av[arg]); j++)
		{
			args_string[new] = av[arg][j];
			new++;
		}
		/* add new line */
		args_string[new] = '\n';
		new++;
	}
	args_string[new] = '\0';
	return (args_string);
}


