#include "main.h"

/**
  * _pow_recursion - calcs x^y iff y>0
  * @x: the base
  * @y: the power
  * Return: log or -1 if y is -ve
  */
int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	pow = x * _pow_recursion(x, (y - 1));

	return (pow);
}
