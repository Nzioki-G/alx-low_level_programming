#include "main.h"

/**
  * print_number - prints a number using only _putchar
  * @n: the number to print
  * Return: void
  */
void print_number(int n)
{
	/* for min_int to fit as a positive */
	unsigned int num, rev = 0;
	int last_digit;

	if (n == 0)
		_putchar('0');
	/* if n is -ve print then remove the sign */
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;

	while (num != 0)
	{
		last_digit = num % 10;
		/* if reverse>INT_MAX, quit */
		if (rev * 10 > INT_MAX)
		{
			_putchar('0' + last_digit);
			break;
		}
		rev = rev * 10 + last_digit;
		num /= 10;
	}
	/* print from last until one(first) digit remains */
	while (rev != 0)
	{
		last_digit = rev % 10;
		_putchar('0' + last_digit);
		rev /= 10;
	}
	/* deal with multiples of 10 */
	while (n % 10 == 0 && n != 0)
	{
		_putchar('0');
		n /= 10;
	}
}
