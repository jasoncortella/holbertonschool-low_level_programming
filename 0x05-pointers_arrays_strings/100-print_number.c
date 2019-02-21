#include "holberton.h"

/**
 *print_number - prints an integer
 *@n: the integer to print
 *Return: Always 0(success)
 */

void print_number(int n)
{
	int i;
	unsigned int abs_n, current;

	if (n < 0)
	{
		abs_n = -n;
		_putchar('-');
	}
	else
		abs_n = n;

	current = abs_n;

	for (i = 1000000000; i > 1; i /= 10)
	{
		if (abs_n / i != 0)
			_putchar('0' + current / i);

		current %= i;
	}
	_putchar('0' + current / i);
}
