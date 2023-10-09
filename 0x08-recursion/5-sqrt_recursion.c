#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find root of
 * Return: root or -1 iff @n has no natural square root
 */
int _sqrt_recursion(int n)
{
	double potential = n / 2;
	if (n == 1)
		return (1);
	else if (n < 3)
		return (-1);

	return ((int)(sqrt_helper((double) n, potential)));
}

/**
 * sqrt_helper - recursive function for calculating sqare root
 * @num: the number to root
 * @potential_root: the approximate root which might be the actual root
 * Return: nothing
 */
double sqrt_helper(double num, double potential_root)
{
	double root;

	root = (potential_root + num / potential_root) / 2;

	if ((int)root == potential_root)
		return (root);

	if (potential_root < root ||
(root == potential_root && (int)root != potential_root))
		return (-1);

	return (sqrt_helper(num, root));
}
