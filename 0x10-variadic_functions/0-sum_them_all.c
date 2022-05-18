#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguements passed
 * @n: number of args to expect
 * @...: the other args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list(args);

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
