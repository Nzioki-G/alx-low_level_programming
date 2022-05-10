#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies 2 numbers
  * @ac: number of ags given
  * @av: string array of args given
  * Return: product of num1 and num2
  */
int main(int ac, char **av)
{
	int product;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	product = atoi(av[1]) * atoi(av[2]);
	printf("%d\n", product);
	return (0);
}
