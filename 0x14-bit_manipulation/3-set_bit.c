#include "main.h"

/**
 * set_bit - sets value of bit at a given index to 1
 * @n: the reference of a base-10 number
 * @index: the index in n as base-2
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit, value, i;

	if ((n && index < 64) &&
(*n >> index || *n == 0 || (*n >> index == 0)))
	{
		bit = *n >> index;
		if ((bit & 1) == 0)
		{
			value = 1;
			for (i = 0; i < index; i++)
				value *= 2;
			*n += value;
		}
		return (1);
	}
	return (-1);
}
