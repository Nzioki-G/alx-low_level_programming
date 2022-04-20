#include "main.h"

/**
  * puts2 - prints alternate chars of string
  * @str: the string under consideration
  * Return: void
  */
void puts2(char *str)
{
	int count = 0;

	/* while value is not NUL */
	while (str[count])
	{
		_putchar(str[count]);
		count += 2;
		if (!str[count - 1])
			break;

	}

	_putchar('\n');
}
