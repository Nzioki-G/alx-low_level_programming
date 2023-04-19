#include "3-calc.h"

/**
 * op_add - calculates sum of 2 numbers
 * @a: first number
 * @b: second number
 * Return: integer answer of operation or Error
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference of 2 numbers
 * @a: first number
 * @b: second number
 * Return: integer answer of operation or Error
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gets the product of 2 numbers
 * @a: first number
 * @b: second number
 * Return: integer answer of operation or Error
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - gets the quotient of 2 numbers
 * @a: first number
 * @b: second number
 * Return: integer answer of operation or Error
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder after diving 2 numbers
 * @a: first number
 * @b: second number
 * Return: integer answer of operation or Error
 */
int op_mod(int a, int b)
{
	return (a % b);
}
