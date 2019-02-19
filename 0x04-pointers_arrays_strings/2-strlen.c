#include "holberton.h"

/**
 *_strlen - swaps the values of two integers
 *@s: the string to be measured
 *Return: the length of string s
 */

int _strlen(char *s)
{
	int count;

	while (s[count] != '\0')
		count++;

	return (count);
}
