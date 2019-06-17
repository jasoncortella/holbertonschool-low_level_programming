#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using
 *               the Shell sort algorithm, using the Knuth sequence
 * @array: Array to sort
 * @size: Size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, n = 1;
	int tmp;

	if (!array || size < 2)
		return;
	while (n * 3 + 1 < size)
		n = n * 3 + 1;
	while (n > 0)
	{
		for (i = n; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= n && array[j - n] > tmp; j -= n)
				array[j] = array[j - n];
			array[j] = tmp;
		}
		print_array(array, size);
		n = (n - 1) / 3;
	}
}
