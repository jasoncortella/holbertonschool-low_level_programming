#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of characters, and
 * initializes it with a specific char
 * @size: the size of the array
 * @c: the char to fill the array with
 * Return: a pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(unsigned int));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(s + i) = c;

	return (s);
}
