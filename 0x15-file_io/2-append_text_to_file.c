#include "main.h"

/**
 * append_text_to_file - appends text to file the end of file
 * @filename: name of the file to append @text_content
 * @text_content: text to append to @filename
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t ok;
	int fd, bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		bytes = strlen(text_content);
		ok = write(fd, text_content, bytes);
		if (ok < bytes)
			return (-1);
	}

	ok = close(fd);
	if (ok == -1)
		return (-1);

	return (1);
}
