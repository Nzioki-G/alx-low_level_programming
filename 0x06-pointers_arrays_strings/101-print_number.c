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


	/* reverse the number */
	while (num / 10 > 0)
	{
		last_digit = num % 10;
		rev *= 10;
		rev += last_digit;
		num /= 10;
	}
	/* add the last digit */
	rev = rev * 10 + num;

	/* print from last until one(first) digit remains */
	while (rev / 10 > 0)
	{
		last_digit = rev % 10;
		_putchar('0' + last_digit);
		rev /= 10;
	}
	/* print the last digit */
	_putchar('0' + rev);
}
