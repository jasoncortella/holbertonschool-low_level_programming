#include "function_pointers.h"

/**
 * array_iterator - executes a passed function on each element of an array
 * @array: the array of paramaters to execute action upon
 * @size: the size of @array
 * @action: the function to execute upon @array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
