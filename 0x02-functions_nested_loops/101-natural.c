#include <stdio.h>

/**
  * main - prints sum of 3,5 multiples below 1024
  * Return: 0
  */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	/* print the sum */
	printf("%d\n", sum);
	return (0);
}
