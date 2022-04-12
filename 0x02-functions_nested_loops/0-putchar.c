#include "main.h"

/**
  * printString - prints a string
  * @str: the string to be printed
  * Return: void
  */
void printString(char str[])
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
  * main - calls fn
  * Return: 0
  */
int main(void)
{
	printString("_putchar");
	return (0);
}
