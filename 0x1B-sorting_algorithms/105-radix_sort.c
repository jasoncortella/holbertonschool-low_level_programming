#include "sort.h"

/**
 * rad_bubble_sort - sorts an array of integers in ascending order using
 *                   the Bubble sort algorithm, with a targeted sort digit
 * @array: Array to sort
 * @size: Size of the array
 * @exp: Exponent to sort
 */
void rad_bubble_sort(int *array, size_t size, int exp)
{
	size_t i, tmp;
	bool swap = true;

	while (swap)
	{
		swap = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] / exp % 10 > array[i + 1] / exp % 10)
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap = true;
			}
		}
	}
}

/**
 * radix_sort - sorts an array of integers in ascending order using
 *              the radix sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */
void radix_sort(int *array, size_t size)
{
	int max = 0, exp;
	size_t i;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
		max = array[i] > max ? array[i] : max;

	for (exp = 1; max / exp > 0; exp *= 10)
	{
		rad_bubble_sort(array, size, exp);
		print_array(array, size);
	}
}
