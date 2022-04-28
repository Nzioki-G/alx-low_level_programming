#include "main.h"

/**
  * factorial - finds factorial of a number
  * @n: the given number
  * Return: factorial of n
  */
int factorial(int n)
{
	/* fact_n = n * fact(n-1) */
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
