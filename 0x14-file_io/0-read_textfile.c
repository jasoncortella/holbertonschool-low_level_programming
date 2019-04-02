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
	int fd, rdlen, wrlen;
	char buf[letters];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rdlen = read(fd, buf, letters);
	if (rdlen == -1)
		return (0);

	close(fd);

	wrlen = write(1, &buf, rdlen);
	if (wrlen != rdlen)
		return (0);

	return (wrlen);
}
