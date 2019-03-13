#include "3-calc.h"

/**
 * main - performs basic mathmatical operatons
 * @argc: the number of passed arguments
 * @argv: an array of the passed arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a1, a2, output;
	int (*math_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	math_func = get_op_func(argv[2]);

	if (!math_func)
	{
		printf("Error\n");
		exit(99);
	}

	output = get_op_func(argv[2])(a1, a2);
	printf("%i\n", output);

	return (0);
}
