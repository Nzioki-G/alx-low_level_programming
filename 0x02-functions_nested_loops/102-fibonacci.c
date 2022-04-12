#include <stdio.h>

/**
  * main - prints 50 first fibonacci numbers
  * Return: void
  */
int main(void)
{
	/* @pp: F(n-2), @prev: F(n-1), @fib: F(n) */
	long int pp = 0, prev = 1, fib;
	int counter = 2;


	printf("0, 1, ");
	while (counter < 50)
	{
		fib = pp + prev;
		pp = prev;
		prev = fib;
		counter++;
		printf("%ld", fib);
		if (counter <= 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
