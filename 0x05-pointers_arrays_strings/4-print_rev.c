#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s: the string under consideration
  * Return: void
  */
void print_rev(char *s)
{
	int count = 0;

	/* get the strlen */
	while (s[count])
		count++;

	/* print from end to index 0 */
	while (count > 0)
	{
		_putchar(s[count - 1]);
		count--;
	}
	_putchar('\n');
}
