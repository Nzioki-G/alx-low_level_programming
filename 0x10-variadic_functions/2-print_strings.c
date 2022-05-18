#include "variadic_functions.h"

/**
* print_strings - prints varid number of strings
* @separator: string tha separates strings printed
* @n: number of args to expect
* @...: the strings to print
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list(args);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
