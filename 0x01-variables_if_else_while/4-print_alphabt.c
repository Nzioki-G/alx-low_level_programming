#include <stdio.h>

/**
  * main - print a-z sans q,e
  * Return: 0
  */
int main(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		if (small == 'e' || small == 'q')
			small++;
		else
		{
			putchar(small);
			small++;
		}
	}
	putchar('\n');
	return (0);
}

