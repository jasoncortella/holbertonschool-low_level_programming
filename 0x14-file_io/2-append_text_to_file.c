#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append text to
 * @text_content: a NULL terminated string to add to the end of the file
 * Return: (1) On success
 *        (-1) On failure
 *        (-1) if text_content is NULL and the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wrlen;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		wrlen = write(fd, text_content, i);
	}
	close(fd);
	if (wrlen == -1)
		return (-1);

	return (1);
}
