#include "main.h"

/**
 * print_binary - prints the binary representation of base-10 @n
 * @n: a decimal number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	/* i'm printing each bit of num from left to right */
	unsigned long int num = n, bit;
	int exponent = 0;

	if (num == 0)
	{
		_putchar(48);
		return;
	}
	/* get the most significant exponent e.g if n = 98 then ex = 6 */
	while (num)
	{
		num >>= 1;
		exponent += 1;
	}
	num = n;
	exponent -= 1;
	while (exponent >= 0)
	{
		/* 98 = 1100010. 98 >> 1,5,6 = 1, 98 >> 0,2,3,4 = 0 */
		bit = num >> exponent;

		/* 0 & 1 = 0,,,, 1 & 1 = 1 */
		_putchar((bit & 1) + 48);
		exponent -= 1;
	}
}
