#include "main.h"

/**
  * print_diagonal - prints a diagnal line
  * @n: length of line \..n
  * Return: void
  */
void print_diagonal(int n)
{
	int count;

	if (n <= 0)
		_putchar('\n');

	for (count = 0; count < n; count++)
	{
		int space;

		for (space = 0; space < count; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
