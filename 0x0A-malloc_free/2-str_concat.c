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
	int i = 0, j = 0, k;
	char *s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	s = malloc((i + j + 1) * sizeof(char));

	if (!s)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	for (k = 0; k < j; k++)
		s[k + i] = s2[k];

	s[i + j] = 0;

	return (s);
}
