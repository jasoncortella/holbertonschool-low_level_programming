#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all arguments
 * @argc: the number of arguments passed in
 * @argv: an array of the arguments passed in
 * Return: 0 on success, 1 if one of the arguments contains a symbol
 */
int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{	printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
