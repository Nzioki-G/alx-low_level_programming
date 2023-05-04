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
	/* bring idx to "ones place value" */
	tmp = tmp >> index;

	for (i = 0; i < index; i++)
		decimal *= 2;

	/* error */
	if (tmp % 2 == 0)
		return (-1);

	*n -= decimal;
	
	return (1);
}












