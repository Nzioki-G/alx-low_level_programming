#include <stdio.h>
#include <string.h>

/**
  * printString - prints a string
  * @str: The string to print
  * Return: void 
  **/
void printString(char str[])
{
	long unsigned int i;
	for (i=0; i<strlen(str); i++)
		putchar(str[i]);
	putchar('\n');
	return;
}
