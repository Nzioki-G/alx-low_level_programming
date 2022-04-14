#include <stdio.h>

/**
  * main - finds the largest prime facto of number
  * Return: 1
  */
int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			if (n % i == 0 && i > 1)
				i--;
		}
	}
	printf("%ld\n", --i);
	return (0);
}
