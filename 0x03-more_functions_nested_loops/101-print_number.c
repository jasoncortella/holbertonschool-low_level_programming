#include "holberton.h"

/**
 *print_number - prints an integer
 *@n: the integer to print
 *Return: Always 0(success)
 */

void print_number(int n)
{
	int i, j, div, print, n_abs;

	if (n < 0)
	{
		n_abs = -n;
		_putchar('-');
	}
	else
		n_abs = n;

	for (i = 10; i >= 1; i--)
	{
		div = 1;
		for (j = 0; j < i; j++)
			div *= 10;
		print = n_abs / div;
		if (n / div != 0)
			_putchar('0' + print);
		n_abs = n_abs % div;
	}
	_putchar('0' + n_abs);
}
