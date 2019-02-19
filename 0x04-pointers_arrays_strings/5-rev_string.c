#include "holberton.h"

/**
 *rev_string - reverses a string
 *@s: the string to be reversed
 */

void rev_string(char *s)
{
	int size = 0, i;

	char temp;

	while (s[size] != '\0')
		size++;

	size -= 1;

	for (i = 0; i < ((size + 1) / 2); i++)
	{
		temp = s[i];
		s[i] = s[size - i];
		s[size - i] = temp;
	}
}
