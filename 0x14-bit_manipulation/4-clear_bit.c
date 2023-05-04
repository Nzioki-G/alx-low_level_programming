#include "main.h"

/**
 * clear_bit - sets value at index to 0
 * @n: the actual number in decimal
 * @index: the position in consideration
 *
 * Return: 1 on sucees else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int decimal = 1, tmp, i;

	tmp = *n;
	if (tmp != 0)
	{
		/* bring idx to "ones place value" */
		tmp = tmp >> index;

		for (i = 0; i < index; i++)
			decimal *= 2;

		if (tmp % 2 == 1 && decimal <= *n)
			*n -= decimal;
		return (1);
	}

	/* error */
	return (-1);
}












