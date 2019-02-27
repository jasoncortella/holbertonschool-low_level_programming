#include "holberton.h"

/**
 *rootcheck - checks if one number is the square of another
 *@guess: the number to square and check
 *@n: the number to check agains
 *Return: guess if it is the square of n, -1 otherwise
 */

int rootcheck(int guess, int n)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	return (rootcheck(guess + 1, n));
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the number to squarerootify
 *Return: the square root of n, or -1 if there is no natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rootcheck(0, n));
}
