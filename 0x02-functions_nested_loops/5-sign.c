#include "holberton.h"

/**
 *print_sign - checks and prints the sign of a number
 *@n: The character to input
 *Return: 1 if n is positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
