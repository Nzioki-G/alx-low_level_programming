#include "main.h"

/**
  * puts_half - prints last half of string
  * @str: string to be printed
  * Return: void
  */
void puts_half(char *str)
{
	int mid, i, length = 0;

	/* get length of string */
	while (str[length])
		length++;

	/* set the midpoint */
	if (length % 2 == 1)
		mid = (length + 1) / 2;
	else
		mid = length / 2;

	/* loop and print from midpoint */
	for (i = mid; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
