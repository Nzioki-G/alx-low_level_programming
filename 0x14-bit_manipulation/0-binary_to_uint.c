#include "main.h"

/**
 * binary_to_uint - converts binary number given as a string to a decimal
 * @b: immutable string representation of binary number
 *
 * Return: the number in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int last = strlen(b) - 1;
	int e, idx;
	int exponent = 0, result = 0, value;
	char cha;

	if (!b)
		return (0);

	for (idx = last; idx >= 0; idx--)
	{
		cha = *(b + idx);
		if (cha == '1')
		{
			value = 1;
			for (e = 0; e < exponent; e++)
				value *= 2;
			result += value;
		}
		else if (cha != '0')
			return (0);
		exponent += 1;
	}
	return (result);
}
