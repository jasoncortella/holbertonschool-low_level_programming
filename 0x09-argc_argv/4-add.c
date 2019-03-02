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
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			if (!atoi(argv[i] + j))
			{
				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
