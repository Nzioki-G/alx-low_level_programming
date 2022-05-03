#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies 2 numbers
  * @argc: number of args
  * @argv: array of args
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int n1, n2;

	/* if args aren't 2, error */
	if (argc != 3)
		printf("Error\n");
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", (n1 * n2));
	}
	return (0);
}
