#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array of paramaters to search
 * @size: the size of @array
 * @cmp: the function to pass onto array
 * Return: the index of the first match, OR -1 if no matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
