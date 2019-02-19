#include "holberton.h"

/**
 *puts2 - prints one character out of 2 in a string
 *@str: the string to be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
