#include "holberton.h"

/**
 *print_diagonal - prints the \ character an input number of times, aligned
 *@n: n is the input number of times to print \
 *Return: Always 0(success)
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

}
