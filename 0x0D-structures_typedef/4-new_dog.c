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
	dog_t *doge;

	while (*(name + i))
		i++;
	while (*(owner + j))
		j++;

	doge = malloc(sizeof(dog_t));
	if (!doge)
		return (NULL);

	doge->name = malloc(i * sizeof(doge->name));
		if (!doge->name)
			return (NULL);
		for (k = 0; k < i; k++)
		doge->name[k] = name[i];
	doge->age = age;
	doge->owner = malloc(j * sizeof(doge->owner));
		if (!doge->owner)
			return (NULL);
	for (k = 0; k < j; k++)
		doge->owner[k] = owner[k];
	return (doge);
}
