#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - prints last digit of random n, comments
  * Return: 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char str[] = "Last digit of";
	int last_digit = n % 10;

	if (last_digit > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, last_digit);
	else if (last_digit == 0)
		 printf("%s %d is %d and is 0\n", str, n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, last_digit);

	return (0);
}
