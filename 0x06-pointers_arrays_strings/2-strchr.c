#include "holberton.h"
#include <stdio.h>

/**
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
		if (*s == c)
			return (s);
	return (NULL);
}
