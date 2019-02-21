#include "holberton.h"

/**
 **_strcat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *Return: the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (s);
}
