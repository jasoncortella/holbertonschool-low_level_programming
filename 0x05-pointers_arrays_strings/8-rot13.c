#include "holberton.h"

/**
 **rot13 - the string to encode
 *@str: the string to be copied
 *Return: the converted string
 */

char *rot13(char *str)
{
	int i, j, new;
	char *s = str;
	char rot[53] = {"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"};

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == rot[j])
			{
				new = (j + 26) % 52;
				str[i] = rot[new];
				j = 52;
			}
		}

		i++;
	}
	return (s);
}
