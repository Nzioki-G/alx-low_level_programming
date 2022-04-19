#include "main.h"

/**
  * print_number - prints number with _putchar
  * @n: the number to be printed
  * Return: void
  */
void print_number(int n)
{
	/* if @n is INT_MIN, its +ve value is larger than INT_MAX */
	unsigned int num;
	int count = 0, reverse = 1;

	/* if @n is -ve, print -, make it positive for processing */
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;

	if (num == 0)
		_putchar('0');

	while (num != 0)
	{
		reverse *= 10;
		reverse += (num % 10);
		num /= 10;
		count++;
	}
	while (count > 0)
	{
		_putchar('0' + (reverse % 10));
		reverse /= 10;
		count--;
	}
}
