#include "sort.h"

/**
 * counting_sort - sorts an array of integers in ascending order using
 *               the Counting sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */
void counting_sort(int *array, size_t size)
{
	int *carr;
	size_t i, j, maxval = 0;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
		if (array[i] > (int)maxval)
			maxval = array[i];
	carr = calloc(maxval + 1, sizeof(int));
	for (i = 0; i < size; i++)
		carr[array[i]] += 1;
	for (i = 1; i <= maxval + 1; i++)
		carr[i] += carr[i - 1];
	print_array(carr, maxval + 1);
	for (i = 0; i <= maxval; i++)
		if (carr[i] != carr[i + 1] && carr[i + 1])
			for (j = carr[i + 1] - carr[i]; j > 0; j--)
				array[carr[i] + j - 1] = i + 1;
	free(carr);
}
