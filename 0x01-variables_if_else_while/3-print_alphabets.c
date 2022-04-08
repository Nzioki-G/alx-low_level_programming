#include <stdio.h>

/**
  * main - print a-z A-Z
  * Return: 0
  */
int main(void)
{
	char small = 'a';
	char capital = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}

	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}

	putchar('\n');
	return (0);
}
