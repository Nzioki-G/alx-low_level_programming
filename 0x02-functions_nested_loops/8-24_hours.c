#include "main.h"

/**
  * print_nums - prints +2 digit nums using _putchar
  * @num: the number to be printed
  * Return: void
  */
void print_nums(int num)
{
	/* remove the last recursively*/
	if (num / 10 > 0)
		print_nums(num / 10);

	/* print the last digit */
	_putchar('0' + (num % 10));
}

/**
  * jack_bauer - prints every minute of the day
  * Return: void
  */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		minute = 0;
		while (minute < 60)
		{
			if (hour < 10)
				_putchar('0');
			print_nums(hour);
			_putchar(':');
			if (minute < 10)
				_putchar('0');
			print_nums(minute);
			_putchar('\n');
			minute++;
		}
	}
}
