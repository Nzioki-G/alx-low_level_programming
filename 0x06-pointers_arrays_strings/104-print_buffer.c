#include "main.h"

/**
  * print_buffer - prints a buffer
  * @b: pointer to the buffer
  * @size: the number of bytes whose content is to be printed
  * Return: nothing. Prints things
  */
void print_buffer(char *b, int size)
{
	int i, j;
	char print_this;

	if (size <= 0)
	{
		printf("\n");
	}

	for (i = 0; i < size; i++)
	{
		/* print val of 1st byte in new line in hex: 10th/a, 20th/14 */
		if (i % 10 == 0)
			printf("%08x: ", i);

		/* print each byte's hex value in pairs */
		printf("%02x", b[i]);
		if (i % 2 == 1)
			printf(" ");

		/* print the words at the end of 10 chars or buffer */
		if ((i + 1) % 10 == 0 || i == size - 1)
		{
			for (j = (i % 10); j >= 0; j--)
			{
				/* non-printable characters */
				print_this = (b[i - j] < 20) ? '.' : b[i - j];
				printf("%c", print_this);
			}
			printf("\n");
		}
	}
}
