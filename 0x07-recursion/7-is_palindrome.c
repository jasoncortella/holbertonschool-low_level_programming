#include "holberton.h"

/**
 *palcheck - checks if digit is the same as its palinbuddy
 *@s: the string to check if palindrome
 *@n: the length of the string
 *Return: 1 if a factor is found, 0 otherwise
 */

int palcheck(char *s, int n)
{
	if (*s != *(s + n - 1))
		return (0);
	else if (n >= 0)
		return (palcheck(s + 1, n - 2));
	return (1);
}

/**
 *_strlen_recursion - returns the length of a string
 *@s: the string to be checked
 *Return: the length of the sting
 */

int _strlen_recursion(char *s)
{
	if (*s++ == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s));
}

/**
 *is_palindrome - checks if a string is a palindrome
 *@s: the string to check
 *Return: 1 if the number is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palcheck(s, _strlen_recursion(s)));
}
