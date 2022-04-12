#include "main.h"

/**
  * times_table - prints 0*0 - 9*9
  * Return: void
  */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (j > 0 && (product < 10))
				_putchar(' ');

			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
