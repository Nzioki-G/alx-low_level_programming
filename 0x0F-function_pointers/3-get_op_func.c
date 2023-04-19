#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform an op
 * @s: op passed as arg
 *
 * Return: the function that performs this op, NULL if @s is NULL
 */
int (*get_op_func(char *s))(int, int)
{
	/* ops: an array of type op_t(op, respective func) */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		/* look for the operation, return fn to handle it */
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
