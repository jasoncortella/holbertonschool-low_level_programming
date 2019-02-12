#include "holberton.h"

/**
 *_islower - checks for lowercase letter
 *@c: the character to input
 *Return: 1 if input is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
