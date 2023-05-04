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
	unsigned int dec = 1, i;

	for (i = 0; i < index; i++)
		dec *= 2;

	/* error */
	if (dec > *n)
		return (-1);

	*n -= dec;
	return (1);
}












