#include "holberton.h"

/**
 **leet - capitalizes a string to leet speak
 *@str: the string to be converted
 *Return: the converted string
 */

char *leet(char *str)
{
	int i, j;
	char *s = str;
	char flags1[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char flags2[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 10; j++)
		{
			if (str[i] == flags1[j])
				str[i] = flags2[j];
		}

		i++;
	}
	return (s);
}
