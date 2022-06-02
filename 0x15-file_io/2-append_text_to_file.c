#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the file to write into
 * @text_content: buffer containing text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, count;

	if (!filename)
		return (-1);

	/* open, append, close */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		count = strlen(text_content);
		w = write(fd, text_content, count);
		if (w < count)
			return (-1);
	}
	close(fd);
	return (1);
}
