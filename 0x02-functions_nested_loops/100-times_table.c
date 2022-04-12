#include "main.h"

/**
  * print_num - prints nums with _putchar
  * @num: number to be printed
  * Return: void
  */
void print_num(int num)
{
	/* remove the last digit */
	if (num / 10 > 0)
		print_num(num / 10);

	/* print the last digit */
	_putchar('0' + (num % 10));
}

/**
  * print_times_table - print table 0 to n
  * @n: the upper limit
  * Return: void
  */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int product = i * j;

				if (j > 0)
				{
					_putchar(' ');
					if (product < 10)
						_putchar(' ');
					if (product < 100)
						_putchar(' ');
				}
				print_num(product);
				if (j < n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
