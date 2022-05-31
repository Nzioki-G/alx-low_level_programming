#include "main.h"

/**
 * _pow - gets the value of base raised to power exponent
 * @base: number to raise
 * @exponent: raise by
 * Return: the power
 */
unsigned int _pow(int base, int exponent)
{
	unsigned int product = 1;

	if (exponent == 0)
		return (1);

	while (exponent > 0)
	{
		product *= base;
		exponent--;
	}
	return (product);
}

/**
 * binary_to_uint - converts a bianry number to unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: the converted number or 0 if b is NULL or has non-binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, index, value, len = strlen(b);

	for (index = 0; index < len; index++)
	{
		/* check if binary */
		if (b[index] == 48 || b[index] == 49)
		{
			if (b[index] == 49) /* if 1 */
			{
				value = len - index - 1;
				decimal += _pow(2, value);
			}
		}
		else
			return (0);
	}
	return (decimal);
}
