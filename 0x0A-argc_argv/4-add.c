#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - adds +ve numbers
  * @argc: number of args
  * @argv: array of args
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* if there are arguements */
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			/* check if digit */
			if (isdigit(*argv[i]))
			{
				/* a digit */
				sum += atoi(argv[i]);

				/* at the end */
				if (i == argc - 1)
				{
					printf("%d\n", sum);
				}
			}
			else
			{
				/* if you meet a non-digit */
				printf("Error\n");
				break;
			}
		}
	}
	else
	{
		/* no numbers */
		printf("0\n");
	}

	return (0);
}
