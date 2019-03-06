#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D array of integers
 * @width: the number of columns in the array
 * @height: the number of rows in the array
 * Return: a pointer to the 2D array, or NULL if width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (!s)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (!s[i])
		{
			for (j = 0; j < i; j++)
				free(s[j]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
