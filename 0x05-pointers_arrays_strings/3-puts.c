#include "main.h"

/**
  * _puts - prints string to stdout
  * @str: pointer to the string
  * Return: void
  */
void _puts(char *str)
{
	int count = 0;

	/* while true, print char at index */
	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
