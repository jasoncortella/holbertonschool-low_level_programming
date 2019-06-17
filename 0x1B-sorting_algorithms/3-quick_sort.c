#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using
 *              the quick sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}

/**
 * lomuto_sort - sorts an array of integers in ascending order using
 *               the quick sort algorithm with lomuto partitioning
 * @array: Array to sort
 * @size: Size of the array
 * @lo: low end of the partition array
 * @hi: high end of the partition array
 */
void lomuto_sort(int *array, size_t size, int lo, int hi)
{
	int p;

	if (lo < hi)
	{
		p = lomuto_partition(array, size, lo, hi);
		lomuto_sort(array, size, lo, p - 1);
		lomuto_sort(array, size, p + 1, hi);
	}
}

/**
 * lomuto_partition - partitions a sub-array of integers using
 *                    the lomuto partitioning scheme
 * @array: Array to sort
 * @size: Size of the array
 * @lo: low end of the partition array
 * @hi: high end of the partition array
 *
 * Return: Index of the partition
*/
int lomuto_partition(int *array, size_t size, int lo, int hi)
{
	int i, j, pivot, tmp;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[hi] < array[i + 1])
	{
		tmp = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}
