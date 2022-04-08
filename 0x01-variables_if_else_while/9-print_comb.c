#include <stdio.h>

/**
  * main - putchar 0, 1, 2, ..
  * Return: 0
  **/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num == 9)
		{
			putchar('0' + num);
			num++;
		}
		else
		{
			putchar('0' + num);
			putchar(',');
			putchar(' ');
			num++;
		}
	}
	putchar('\n');
	return (0);
}
