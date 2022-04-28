#include "main.h"

/**
  * _puts_recursion - prints a string using recursion
  * @s: string to print
  * Retuen: nothing
  */
void _puts_recursion(char *s)
{
	int i = 0;

	/* if null */
	if (!s[i])
	{
		putchar('\n');
		return;
	}

	/* print 1st character */
	_putchar(s[i]);

	/* call this fn again with string from 2nd char */
	_puts_recursion(&s[i + 1]);
}
