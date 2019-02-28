#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of the two arguments it receives
 * @argc: the number of arguments passed in
 * @argv: an array of the arguments passed in
 * Return: 0 if successful, 1 if not
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%i\n", i * j);
	return (0);
}
