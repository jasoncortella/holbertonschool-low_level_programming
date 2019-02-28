#include "holberton.h"

/**
 *wildcmp - checks if two strings are identical
 *@s1: the first string to check
 *@s2: the second string to check
 *Return: 1 if the strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*(s2 + 1) != *s1 && *s1 != '\0')
			return (wildcmp(s1 + 1, s2));
		else
			return (wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
