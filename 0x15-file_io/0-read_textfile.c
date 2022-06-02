#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: path/ name of file to read and print
 * @letters: number of letters to deal with
 *
 * Return: 0 on fail otherwise the number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_r, num_w;
	void *buf;

	buf = malloc(letters * sizeof(char));

	if (!buf || !filename)
		return (0);

	/* open, read, write, close */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* file can't open */
		return (0);

	num_r = read(fd, buf, letters);
	if (num_r < 0)
		return (0);

	num_w = write(1, buf, num_r);
	if (num_w != num_r)
		return (0);

	close(fd);

	return (num_w);
}
