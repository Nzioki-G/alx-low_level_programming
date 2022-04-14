#include "main.h"

/**
  * print_square - prints a square using #
  * @size: the dimensions of this square
  * Return: void
  **/
void print_square(int size)
{
	int length, width;

	for (length = 0; length < size; length++)
	{
		for (width = 0; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
