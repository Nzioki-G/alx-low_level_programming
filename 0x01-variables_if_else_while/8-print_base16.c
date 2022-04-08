#include <stdio.h>

/**
  * main - print 0-9 a-f
  * Return: 0
  **/
int main(void)
{
	int nums = 0;
	char more = 'a';

	while (nums < 10)
	{
		putchar('0' + nums);
		nums++;
	}
	while (more <= 'f')
	{
		putchar(more);
		more++;
	}
	putchar('\n');
	return (0);
}
