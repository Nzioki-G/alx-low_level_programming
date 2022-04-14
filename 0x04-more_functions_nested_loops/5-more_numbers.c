#include "main.h"

/**
  * more_numbers - print 0-14 10*
  * Return: void
  */
void more_numbers(void)
{
	int i, count;

	for (count = 0; count < 10; count++)
	{
		i = 0;

		while (i <= 14)
		{
			if (i >= 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			i++;
		}
		_putchar('\n');
	}
}
