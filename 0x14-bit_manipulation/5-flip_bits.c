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
	unsigned int count = 0;
	unsigned long int bigger = 0;

	/* either is not 0 */
	while (n && m)
	{
		if (n % 2 != m % 2)
			count++;

		n = n >> 1;
		m = m >> 1;
	}
	bigger = n > m ? n : m;
	while (bigger > 0)
	{
		if (bigger % 2)
			count++;
		bigger = bigger >> 1;
	}

	return (count);
}
