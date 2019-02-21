#include "holberton.h"

/**
 **_strcmp - compares two strings
 *@s1: the first string
 *@s2: the second string
 *Return: 0 is strings match, negative if s1 < s2 , positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (0);
}
