#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * args_err - prints error on incorrect number of args
 * Return: exit 97
 */
int args_err()
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * src_err - prints error on inexistent/unreadable source file
 * @filename: name of the source file
 * Return: exit 98
 */
int src_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * dest_err - prints error on failure to create/write to file
 * @filename: name of file
 *
 * Return: exit 99
 */
int dest_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * close_err - prints error on failure to close a file descriptor
 * @fd: the fd we couldn't close
 *
 * Return: exit 100
 */
int close_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies a file's content into another file
 * @argc: number of arguemnts at runtime
 * @argv: list of arguments given at runtime
 *
 * Return: 97 - incorrect argc, 98 - file1 doesnot exist,
 * 99 - creation of or write to file2 fails, 100 - close fails
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, w_ok, bytes, c1, c2;
	char *src, *dest;
	char *buf;

	if (argc != 3)
		args_err();

	src = argv[1];
	dest = argv[2];

	/* open source file */
	fd_from = open(src, O_RDONLY);
	if (fd_from == -1)
		src_err(src);

	/* open destination file, -rw-rw-r-- */
	fd_to = open(dest, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR |
S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		dest_err(dest);

	buf = malloc(sizeof(char) * 1024);

	/* copy to destination 1024 bytes at a time until EOF */
	while (1)
	{
		bytes = 0;
		w_ok = -1;
		bytes = read(fd_from, buf, 1024);
		if (bytes <= 0)
			break;

		w_ok = write(fd_to, buf, bytes);
		if (w_ok != bytes)
			dest_err(dest);
	}
	c1 = close(fd_from);
	if (c1 == -1)
		close_err(fd_from);

	c2 = close(fd_to)
	if (c2 == -1)
		close_err(fd_from);

	return (1);
}
