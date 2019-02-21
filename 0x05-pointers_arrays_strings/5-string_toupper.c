#include "holberton.h"

/**
 **string_toupper - changes all lowercase letters of a string to upper
 *@str: the string to be converted
 *Return: the converted string
 */

char *string_toupper(char *str)
{
	int i;
	char *s = str;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}

		i++;
	}
	return (s);
}
