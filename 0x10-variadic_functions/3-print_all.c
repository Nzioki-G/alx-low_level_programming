#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: a list of types of args passed
  * @...: the other args passed
  *
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c, *str;

	va_list(args);

	if (!format)
		return;

	va_start(args, format);

	while (format[i])
	{
		c = format[i];
		switch (c)
		{
			case 99:
				printf("%c", va_arg(args, int));
				break;
			case 102:
				printf("%f", va_arg(args, double));
				break;
			case 105:
				printf("%d", va_arg(args, int));
				break;
			case 115:
				str = va_arg(args, char *);
				if(!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if ((c == 99 || c == 102 || c == 105 || c == 115) && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
