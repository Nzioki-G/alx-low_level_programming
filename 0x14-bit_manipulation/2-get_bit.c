#include "main.h"

/**
 * get_bit - returns the value of a bit at @index
 * @n: a number in base-10
 * @index: index of bit whose value we return
 *
 * Return: value of bit; (1 / 0) or -1 on erro
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n >> index)
		return ((n >> index) & 1);

	return (-1);
}
