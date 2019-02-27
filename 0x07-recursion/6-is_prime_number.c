#include "holberton.h"

/**
 *primecheck - finds the first factor of a number
 *@guess: the number to check if it is a factor of n
 *@n: the number to check
 *Return: 1 if a factor is found, 0 otherwise
 */

int primecheck(int guess, int n)
{
	if (n % 2 == 0 || (n % guess == 0 && guess < n))
		return (0);
	else if (guess < n)
		return (primecheck(guess + 2, n));
	return (1);
}

/**
 *is_prime_number - checks to see if a number is prime
 *@n: the number to check
 *Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (primecheck(3, n));
}
