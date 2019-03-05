#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	s = malloc(sizeof(s1) + sizeof(s2) - 1);

	if (s1 == NULL)
		*s1 = "";


	for (i = 0; *(s1 + i); i++)
		*(s + i) = *(s1 + i);

	for (j = 0; *(s2 + j); i++, j++)
		*(s + i) = *(s2 + j);

	*(s + i + 1) = 0;

	return (s);
}
