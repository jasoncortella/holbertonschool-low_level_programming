#include "holberton.h"

/**
 *print_alphabet -  to print the alphabet in lowercase
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');

}
