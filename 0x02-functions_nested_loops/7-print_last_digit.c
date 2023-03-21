#include "main.h"

/**
  * _abs - gets the the absolute value of number
  * @num: the integer to be absoluted
  * Return: absolute val
  */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (num * -1);
}

/**
  * print_last_digit - returns last digit
  * @num: number under consideration
  * Return: value of last digit
  */
int print_last_digit(int num)
{
	int last_digit = _abs(num % 10);

	_putchar('0' + last_digit);
	return (last_digit);
}
