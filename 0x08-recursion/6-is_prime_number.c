#include "main.h"
#include <stdlib.h>

/**
  * isPrime - checks if num is prime
  * @num: the nimber
  * @i: counter
  * Return: 0-not prime, 1-prime
  */
int isPrime(int num, int i)
{
	/* base cases: 1, 2, and not-prime */
	if (num == 1)
		return (0);
	if (num == 2)
		return (1);
	if (num % i == 0)
		return (0);

	/* when it's a prime, i^2>num */
	if (num < (i * i))
		return (1);
	return (isPrime(num, i + 1));
}

/**
  * is_prime_number - checks for prime numbers
  * @n: number under consideration
  * Return: 1 if prime else 0
  */
int is_prime_number(int n)
{
	/* call a fn that has a static variable divisor */
	return (isPrime(abs(n), 2));
}
