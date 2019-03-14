#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of main
 * @argc: the number of passed arguments
 * @argv: an array of the passed arguments
 * Return: 0 (success), 1 (incorrect number of arguments), 2 (argument < 0)
 */

int main(int argc, char *argv[])
{
	int a1, i;
	char *mainpt = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a1 = atoi(argv[1]);

	if (a1 < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < (a1 - 1); i++)
		printf("%02hhx ", mainpt[i]);
	i++;
	printf("%02hhx\n", mainpt[i]);

	return (0);
}
