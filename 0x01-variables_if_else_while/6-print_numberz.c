#include <stdio.h>

/**
  * main - putchar 0-9
  * Return: 0
  **/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
