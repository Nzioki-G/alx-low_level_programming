#include "main.h"
#include <limits.h>

/**
 * _pow - gets the value of base raised to power exponent
 * @base: number to raise
 * @exponent: raise by
 * Return: the power
 */
unsigned int _pow(int base, int exponent)
{
	unsigned int product = 1;

	if (exponent == 0)
		return (1);

	while (exponent > 0)
	{
		product *= base;
		exponent--;
	}
	return (product);
}

/**
 * find_power - gets the log of num just less than given number
 * @num: the upper limit
 *
 * Return: indice
 */
unsigned long int find_power(unsigned long int num)
{
	unsigned long int power = 0, x = 1;

	while (1)
	{
		if (x * 2 > num)
			break;
		x *= 2;
		power++;
	}
	return (power);
}

/**
 * print_binary - prints the binary version of number
 * @n: number in decimal
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary = 0;
	int e;

	while (n > 0)
	{
		e = find_power(n);
		n -= _pow(2, e); /* reduce n */
		binary += _pow(10, e); /* develop the binary number */
	}
	printf("%ld", binary);
}











