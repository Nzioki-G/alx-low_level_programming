#include "main.h"
#include <stdlib.h>

/**
 * get_bit - gets value of the bit at index in binary number
 * @n: the number in decimal form
 * @index: the index from 0 of bit to check
 * Return: the value of bit on success else -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n > 0)
	{
		if (i == index)
		{
			return (n % 2);
		}
		n /= 2;
		i++;
	}
	/* if we get here there's an error */
	return (-1);
}
