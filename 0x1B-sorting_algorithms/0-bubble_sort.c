#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 *               the Bubble sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, tmp;
	bool swap = true;

	if (!array || size < 2)
		return;
	while (swap)
	{
		swap = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swap = true;
			}
		}
	}
}
