#include "main.h"

/**
 * flip_bits - gets bits you would need to flip to get from @n to @m
 * @n: first number
 * @m: other number
 *
 * Return: number to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, mask, i = 0;

	while (mask <= n || mask <= m)
	{
		mask = 1 << i;
		if ((m & mask) ^ (n & mask))
			count++;
		i++;
	}

	return (count);
}
