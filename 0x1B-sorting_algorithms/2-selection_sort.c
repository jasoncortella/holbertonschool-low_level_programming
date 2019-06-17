#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 *               the selection sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index, tmp;
	int min;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		if (array[i] > array[index])
		{
			tmp = array[i];
			array[i] = array[index];
                        array[index] = tmp;
                        print_array(array, size);
		}
	}
}
