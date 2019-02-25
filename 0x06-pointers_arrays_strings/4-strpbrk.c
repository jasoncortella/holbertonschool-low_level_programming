#include "holberton.h"
#include <stdio.h>

/**
 **_strpbrk - searches a string for any set of bytes
 *@s: the string to be parsed
 *@accept: the characters to look for
 *Return: (s) a pointer to the first matching instance, or 0 if no matches
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
		for (j = 0; accept[j] != '\0'; j++)
			if (*s == accept[j])
				return (s);
	return (NULL);
}
