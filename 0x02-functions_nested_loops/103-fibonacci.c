#include <stdio.h>

/**
  * main - gets sum of all even number fibonacci < 4mill
  * Return: void
  */
int main(void)
{
	/* @pp: F(n-2), @prev: F(n-1), @fib: F(n) */
	long int pp = 0, prev = 1, fib = 0, sum = 0;
	int counter = 0;

	while (fib < 4000000)
	{
		/* get the fib of n, set @pp and @prev */
		fib = pp + prev;
		pp = prev;
		prev = fib;

		/* check if fib is even & add */
		if (fib % 2 == 0)
			sum += fib;
		counter++;
	}
	printf("%li\n", sum);
	return (0);
}
