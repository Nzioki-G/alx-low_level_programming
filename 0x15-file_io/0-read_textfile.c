#include "main.h"

/**
 * read_textfile - reads from file and prints to stdout
 * @filename: the file to read from
 * @letters: number of letter to be read and printed
 *
 * Return: the number of letter successfully read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t bytes;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	bytes = read(fd, buf, letters);
	if (bytes != letters && *(buf + bytes) != '\0')
		return (0);

	dprintf(STDOUT_FILENO, "%s", buf);
	close(fd);

	return (bytes);
}
