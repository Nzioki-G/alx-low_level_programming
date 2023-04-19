#include "3-calc.h"

/**
 * main - calculator
 * @argc: number of args given
 * @argv: array of args given
 *
 * Return: result of operation, 98 if @argc is wrong,
 * 99 if op is not +,-,*,/,% and 100 if division by 0
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*chosen_func)(int, int);

	/* Usage: calc num1 op num2 */
	if (argc != 4)
	{
		/* wrong number of args */
		printf("%s\n", "Error");
		exit(98);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && argv[3] == 0)
	{
		/* dividing by 0 */
		printf("%s\n", "Error");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	chosen_func = get_op_func(argv[2]);
	if (chosen_func == NULL)
	{
		/* wrong kind of operator */
		printf("%s\n", "Error");
		exit(99);
	}
	result = chosen_func(num1, num2);

	printf("%d\n", result);

	return (0);
}
