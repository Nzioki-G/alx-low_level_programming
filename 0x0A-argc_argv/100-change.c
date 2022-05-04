#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints min number of coins to make change
  * @argc: number of argd
  * @argv: string array of args
  * Return: 0 or 1 if error
  */
int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	/* loop until cents are 1 */
	while (cents >= 1)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
