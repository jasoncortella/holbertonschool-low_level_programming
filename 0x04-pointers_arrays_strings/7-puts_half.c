#include "holberton.h"

/**
 *puts_half - prints half of a string
 *@str: the string to be printed
 */

void puts_half(char *str)
{
	int i, j, strlen = 0;

	for (i = 0; str[i] != '\0'; i++)
		strlen++;

	for (j = strlen - (strlen / 2); j < strlen; j++)
		_putchar(str[j]);

	_putchar('\n');
}
