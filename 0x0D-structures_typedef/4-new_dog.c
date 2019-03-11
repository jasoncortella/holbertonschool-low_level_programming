#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	char *namedoge, *ownerdoge;
	dog_t *doge;

	while (name[i])
		i++;
	while (owner[j])
		j++;

	doge = malloc(sizeof(dog_t));
	if (!doge)
		return (NULL);

	namedoge = malloc((i + 1) * sizeof(char));
	if (!namedoge)
	{
		free(doge);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		namedoge[k] = name[k];
	namedoge[k] = 0;

	ownerdoge = malloc((j + 1) * sizeof(char));
	if (!ownerdoge)
	{
		free(namedoge);
		free(doge);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		ownerdoge[k] = owner[k];
	ownerdoge[k] = 0;

	doge->name = namedoge;
	doge->age = age;
	doge->owner = ownerdoge;
	return (doge);
}
