#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - duplicates a string into a newly allocated space in memory
 * @str: the string to duplicate
 * Return: a pointer to the newly allocated space, or NULL if error
 */

char *_strdup(char *str)
{
	int i;
	char *s;

	s = malloc(sizeof(str));

	if (s == NULL || str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	return (s);
}
