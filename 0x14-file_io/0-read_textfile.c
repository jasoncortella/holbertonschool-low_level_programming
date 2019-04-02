#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the text file to be read
 * @letters: the number of letters to read and print
 * Return: On success, the number of letters that could be read and printed
 *         (0) if write fails or does not write the expected amount of bytes
 *         (0) if filename is NULL, or if file can not be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rdlen, wrlen;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	rdlen = read(fd, buf, letters);
	if (rdlen == -1)
	{
		free(buf);
		return (0);
	}

	close(fd);

	wrlen = write(STDOUT_FILENO, buf, rdlen);
	if (wrlen == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (wrlen);
}
