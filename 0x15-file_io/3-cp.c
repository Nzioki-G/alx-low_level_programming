#include <stdio.h>
#include "main.h"

/**
 * main - copies content of file to another file
 * @argc: number of args passed
 * @argv: array of strings(args)
 * Return: 97 ==> if no. of args is incorrect
 *	98 ==> if file_from doesn't exist or error on read
 *	99 ==> if can't create file_to or error write
 *	100 ==> if can't close file descriptor
 */
int main(int argc, char **argv)
{
	void *buffer;
	int fd1, fd2, r, w, c1, c2;

	buffer = malloc(sizeof(char) * 1024);
	if (argc != 3)
	{
		dprintf(1, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	/* open and read src file, write into dest */
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(1, "%s%s\n",
"Error: Can't read from file ", argv[1]);
		exit(98);
	}
	/* open dest file */
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(1, "%s%s\n",
"Error: Can't write to ", argv[2]);
		exit(99);
	}
	while (1)
	{
		r = read(fd1, buffer, 1024); /* read src file */
		if (r == -1)
		{
			dprintf(1, "%s%s\n",
"Error: Can't read from file ", argv[1]);
			exit(98);
		}
		w = write(fd2, buffer, r); /* write into dest file */
		if (w == -1)
		{
			dprintf(1, "%s%s\n",
"Error: Can't write to ", argv[2]);
			exit(99);
		}
		if (r < 1024 && r == w) /* we get to the end */
		{
			return (0);
		}
	}
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
	{
		dprintf(2, "%s%d\n", "Error: Can't close fd ", fd1);
		exit(100);
	}
	if (c2 == -1)
	{
		dprintf(2, "%s%d\n", "Error: Can't close fd ", fd2);
		exit(100);
	}
	return (0);
}
