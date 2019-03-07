#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * digitcheck - checks of a string has any non digits
 * @str: the string to check
 * Return: 0 if all digits, 1 otherwise
 */

int digitcheck(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}


/**
 * main - prints the product of the two arguments it receives
 * @argc: the number of arguments passed in
 * @argv: an array of the arguments passed in
 * Return: 0 if successful, 1 if not
 */
int main(int argc, char *argv[])
{
	int i, j, result, rev_result;

	for (i = 1; i <= 2; i++)
	{
		if (argc != 3 || digitcheck(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	result = i * j;

	while (result)
	{
		rev_result = rev_result * 10 + result % 10;
		result /= 10;
	}
	while (rev_result)
	{
		_putchar((rev_result % 10) + '0');
		rev_result /= 10;
	}
	_putchar('\n');
	return (0);
}
