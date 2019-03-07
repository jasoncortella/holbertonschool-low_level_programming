#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: the low end value
 * @max: the high end value
 * Return: a pointer to the array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);
	s = malloc((max - min + 1) * sizeof(int));

	if (!s)
		return (NULL);

	for (i = min; i <= max; i++)
		s[i - min] = i;

	return (s);
}
