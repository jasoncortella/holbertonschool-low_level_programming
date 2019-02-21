#include "holberton.h"

/**
 **cap_string - capitalizes all words of a string
 *@str: the string to be converted
 *Return: the converted string
 */

char *cap_string(char *str)
{
	int i, j, space;
	char *s = str;
	char flags[14] = {' ', '\n', '\t', ',', ';', '.',
			  '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	space = 1;

	while (str[i] != '\0')
	{
		if (space == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
		}

		space = 0;

		for (j = 0; j <= 13; j++)
		{
			if (str[i] == flags[j])
				space = 1;
		}

		i++;
	}
	return (s);
}
