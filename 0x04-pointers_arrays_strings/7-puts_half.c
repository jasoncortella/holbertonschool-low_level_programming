#include "holberton.h"

/**
 *puts_half - prints half of a string
 *@str: the string to be printed
 */

void puts_half(char *str)
{
	int i, strlen = 0;

	for (i = 0; str[i] != '\0'; i++)
		strlen++;

	for (i = strlen - (strlen / 2); i <= strlen; i++)
		_putchar(str[i]);
	_putchar('\n');
}
