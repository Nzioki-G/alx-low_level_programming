#include <stdio.h>

/**
  * main - prints its name
  * @argc: number of commands given during execution
  * @argv: array of commands given during execution
  * Return: 0
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
