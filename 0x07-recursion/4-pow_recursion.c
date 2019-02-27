#include "holberton.h"

/**
 *_pow_recursion - returns the value of x raised to the power of f
 *@x: the value to exponentiate
 *@y: the power to raise x to
 *Return: x to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
     		return (x * _pow_recursion(x, y - 1));

}
