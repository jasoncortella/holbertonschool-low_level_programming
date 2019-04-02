#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to wtire to the file
 * Return: (1) On success, the number of letters that could be read and printed
 *        (-1) On failure (file can not be created, file can not be written,
 *             write “fails”, etc…)
 *        (-1) if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wrlen;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
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
