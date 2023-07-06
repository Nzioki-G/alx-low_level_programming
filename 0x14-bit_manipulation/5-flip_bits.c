#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from @n to @m
 * @n: first number
 * @m: other number
 *
 * Return: number of bits to flip to make n == m true
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**
	 * I'm using xOR to get the difference in bits.
	 * 1 ^ 1 = 0
	 * 0 ^ 0 = 0
	 * 1 ^ 0 = 1
	 * 0 ^ 1 = 1
	 */
	unsigned int count = 0;

	while (n || m)
	{
		/* 9&1 ^ 8&1 = 1 ^ 0 = 1 */
		if ((n & 1) ^ (m & 1))
			count += 1;

		n = (n > 0) ? (n >> 1) : 0;
		m = (m > 0) ? (m >> 1) : 0;
	}
	return (count);
}
