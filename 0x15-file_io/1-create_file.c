#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * create_file - creates and writes into file
 * @filename: name of file to create
 * @text_content: string to write into file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, bytes;

	if (!filename)
		return (-1);

	/* open/create, write, close */
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		bytes = strlen(text_content);
		w = write(fd, text_content, bytes);
		if (w < bytes - 1)
		{
			return (-1);
		}
	}

	close(fd);
	return (1);
}
