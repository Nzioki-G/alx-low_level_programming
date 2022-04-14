#include "main.h"

/**
  * print_line - draws a straight line
  * @n: the length of line _...n
  * Return: void
  */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
