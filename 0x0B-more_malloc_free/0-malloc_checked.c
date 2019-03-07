#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc-checked - allocates memory using malloc
 * @b: the amount of memory to allocate
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
