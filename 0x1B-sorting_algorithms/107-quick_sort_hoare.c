#include "sort.h"

/**
 * quick_sort_hoare - sorts an array of integers in ascending order using
 *                    the quick sort algorithm with Hoare Partition scheme
 * @array: Array to sort
 * @size: Size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	hoare_sort(array, size, 0, size - 1);
}

/**
 * hoare_sort - sorts an array of integers in ascending order using
 *              the quick sort algorithm with hoare partitioning
 * @array: Array to sort
 * @size: Size of the array
 * @lo: low end of the partition array
 * @hi: high end of the partition array
 */
void hoare_sort(int *array, size_t size, int lo, int hi)
{
	int p;

	if (lo < hi)
	{
		p = hoare_partition(array, size, lo, hi);
		hoare_sort(array, size, lo, p - 1);
		hoare_sort(array, size, p, hi);
	}
}

/**
 * hoare_partition - partitions a sub-array of integers using
 *                   the hoare partitioning scheme
 * @array: Array to sort
 * @size: Size of the array
 * @lo: low end of the partition array
 * @hi: high end of the partition array
 *
 * Return: Index of the partition
*/
int hoare_partition(int *array, size_t size, int lo, int hi)
{
	int i, j, pivot, tmp;

	pivot = array[hi];
	i = lo - 1;
	j = hi + 1;
	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i >= j)
			return (i);

		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, size);
	}
}
