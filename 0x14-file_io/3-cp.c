#include "holberton.h"

/**
 * main - copies contents of one file to another file
 * @argc: the number of input arguments
 * @argv: a character array containing the input arguments
 * Return: (0) On success
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, ret, wrcheck;
	char buf[BUFSIZ];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((ret = read(fd1, buf, BUFSIZ)) > 0)
	{
		wrcheck = (write(fd2, buf, ret));
		if (wrcheck != ret)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (ret == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	ret = close(fd1);
	if (ret == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	ret = close(fd2);
	if (ret == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fd2), exit(100);
	return (0);
}
