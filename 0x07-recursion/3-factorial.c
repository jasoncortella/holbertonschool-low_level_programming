#include "holberton.h"

/**
 *factorial - returns the f actorial of n
 *@n: the factorial to be calculated
 *Return: the calculated factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
