#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees an input dog_t structure
 * @d: the input structure
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
