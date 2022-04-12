#include "main.h"

/**
  * print_num - prints numbers using _putchar
  * @num: the number to be printed
  * Returns: void
  */
void print_num(int num)
{
	/* if num is -ve make it +ve */
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	/* remove the last digit recursively*/
	if (num / 10 > 0)
		print_num(num / 10);

	/* print the last digit */
	_putchar('0' + num % 10);
}

/**
  * print_to_98 - prints n to 98
  * @n: starting point
  * Return: void
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			print_num(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			print_num(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	print_num(98);
	_putchar('\n');
}
