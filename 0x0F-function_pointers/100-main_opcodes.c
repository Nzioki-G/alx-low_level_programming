#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of command line args
 * @argv: array of command line args
 * Return: 0 on success, 1 on bad argc, 2 on bad argv[1]
 */
int main(int argc, char **argv)
{
	int bytes, i;
	int (*location)(int,  char **) = main;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}

	while (i < bytes)
	{
		printf("%p ", *(location + i));
		i++;
	}
	printf("\n");
	return (0);
}
