#include "holberton.h"

/**
 * cp - copies contents of one file to another file
 * @argc: the number of input arguments
 * @argv: a character array containing the input arguments
 * Return: (1) On success
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, n, wrcheck;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY, 0);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = creat(argv[2], 0666);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                exit(99);
	}
	while ((n = read(fd1, buf, 1024)) > 0)
	{
		wrcheck = (write(fd2, buf, n));
		if (wrcheck != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	return (0);
}
