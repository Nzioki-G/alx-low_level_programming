#include "main.h"

/**
 * clear_bit - clears value of bit at a given index; sets to 0
 * @n: the reference of a base-10 number
 * @index: the index in n as base-2
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit, value, i;

	if (*n >> index || *n == 0)
	{
		bit = *n >> index;
		if ((bit & 1) == 1)
		{
			value = 1;
			for (i = 0; i < index; i++)
				value *= 2;
			*n -= value;
		}
		return (*n);
	}
	return (-1);
}
