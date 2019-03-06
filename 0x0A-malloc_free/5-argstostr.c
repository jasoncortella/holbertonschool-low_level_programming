#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments
 * @ac: the number of arguments
 * @av: an array of the arguments
 * Return: a pointer to concatenated string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, totlength;
	char *s;

	if (!ac || !av)
		return (NULL);

	totlength = 0;
	for (i = 0; i < ac; i++)
	{
		if (!av[i])
			av[i] = "";
		for (j = 0; av[i][j]; j++)
			totlength++;
		totlength++;
	}

	s = malloc((totlength + 1) * sizeof(char));

	if (!s)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}

	s[k] = 0;
	printf("%i\n", totlength);
	return (s);
}
