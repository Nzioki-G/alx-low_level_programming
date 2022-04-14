#include "main.h"

/**
  * print_number - prints number with _putchar
  * @n: the number to be printed
  * Return: void
  */
void print_number(int n)
{
	int count = 0, reverse;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');

	while (n >= 1)
	{
		reverse *= 10;
		reverse += (n % 10);
		n /= 10;
		count++;
	}
	while (count > 0)
	{
		_putchar('0' + (reverse % 10));
		reverse /= 10;
		count--;
	}
}
