#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of command line args
 * @argv: array of command line args
 * Return: 0 on success, 1 on bad argc, 2 on bad argv[1]
 */
int main(int argc, char **argv)
{
	int bytes, *address;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}

	/**
	 * main type: ‘int (*)(int,  char **)’
	 * cast it into (any?) non-void pointer type
	 * get the address of the first code-byte of main
	 */
	address = (int *)&main;

	while (bytes > 1)
	{
		/**
		 * dereference address, unearth opcode!
		 * The hh modifier(as per chatGPT) indicates
		 * a char integer arguement
		 * 02: print the last 2 hex digits
		 */
		printf("%02hhx ", *address++);
		bytes--;
	}
	printf("%02hhx\n", *address++);
	return (0);
}
