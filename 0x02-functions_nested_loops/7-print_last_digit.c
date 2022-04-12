#include "main.h"

/**
  * print_last_digit - returns last digit
  * @num: number under consideration
  * Return: value of last digit
  */
int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;
	_putchar('0' + (num % 10));
	return (0);
}
