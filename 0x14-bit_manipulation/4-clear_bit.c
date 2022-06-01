#include "main.h"

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
 * clear_bit - sets value at index to 0
 * @n: the array holding the binary number
 * @index: the position in consideration
 *
 * Return: 1 on sucees else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int e, num = *n;

	if (!n)
		return (-1);

	while (num > 0)
	{
		e = find_power(num);
		if (e == index) /* bit at given index is 1 */
		{
			*n -= _pow(2, e);
			return (1);
		}
		num -= _pow(2, e);
	}

	if (num == 0) /* something's not right */
		return (1);
	else
		return (-1);
}












