#include <stdio.h>

/**
  * main - prints number of arguements passed at execution
  * @argc: the number of arguments passed to terminal
  * @argv: array of arguements passed during execution
  * Return: 0.
  */
int main(int argc, char* argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
