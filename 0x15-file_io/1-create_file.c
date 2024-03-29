#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ok;

	if (!filename)
		return (-1);

	/* open the file, parameters: name, flags, mode */
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* write to file the content of the input string given */
	if (text_content)
	{
		ok = write(fd, text_content, strlen(text_content));
		if (ok == -1)
			return (-1);
	}

	close(fd);
	if (fd == -1)
		return (-1);

	return (1);
}
