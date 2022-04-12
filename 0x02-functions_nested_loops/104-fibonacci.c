#include <stdio.h>

/**
  * main - prints first 98 fibonacci numbers
  * Return: 0
  */
int main(void)
{
	/* @pp: F(n-2), @prev: F(n-1), @fib: F(n) */
	long double pp = 0, prev = 1, fib = 0;
	int counter = 0;

	while (counter < 98)
	{
		/* get @fib, set @pp & @prev */
		fib = pp + prev;
		pp = prev;
		prev = fib;
		printf("%.0Lf, ", fib);
/*		if (counter < 97)
			printf(", "); */
		counter++;
	}
	printf("\n");
	return (0);
}
