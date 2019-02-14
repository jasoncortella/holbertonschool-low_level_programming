#include "holberton.h"

/**
 *print_line - prints the _ character an input number of times
 *@n: n is the input number of times to print _
 *Return: Always 0(success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
