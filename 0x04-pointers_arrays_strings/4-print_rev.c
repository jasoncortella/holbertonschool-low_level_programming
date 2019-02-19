#include "holberton.h"

/**
 *print_rev - prints a string in reverse
 *@s: the string to be printed
 */

void print_rev(char *s)
{
	int slength = 0, i;

	while (s[slength] != '\0')
		slength++;
	for (i = slength - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
