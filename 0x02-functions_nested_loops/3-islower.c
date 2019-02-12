#include "holberton.h"

/**
 *_islower - checks for lowercase letter
 *@c - the character to input
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
