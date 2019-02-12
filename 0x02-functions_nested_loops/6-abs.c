#include "holberton.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: The character to input
 *
 *Return: abs, the absolute value of the input
 */

int _abs(int n)
{
	int abs;

	if (n < 0)
		abs = n * -1;
	else
		abs = n;
	return (abs);
}
