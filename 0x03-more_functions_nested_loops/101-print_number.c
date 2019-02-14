#include "holberton.h"

/**
 *print_number - prints an integer
 *@n: the integer to print
 *Return: Always 0(success)
 */

void print_number(int n)
{
	int i, j, print;
	unsigned int n_abs, n_abs_init, div;

	if (n < 0)
	{
		n_abs_init = -n;
		_putchar('-');
	}
	else
		n_abs_init = n;
	n_abs = n_abs_init;

	for (i = 9; i >= 1; i--)
	{
		div = 1;
		for (j = 0; j < i; j++)
			div *= 10;
		print = n_abs / div;
		if ((n_abs_init / div) != 0)
			_putchar('0' + print);
		n_abs = n_abs % div;
	}
	_putchar('0' + n_abs);
}
