#include <stdio.h>

/**
  * main - prints to stderr
  * Return: 1
  */
int main(void)
{
	char *ptr = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/* fwrite(source_location, size_of_data, items_of_data, destination_file) */
	fwrite(ptr, 59, 1, stderr);
	return (1);
}
