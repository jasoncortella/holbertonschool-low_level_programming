#include "sort.h"

/**
 * counting_sort - sorts an array of integers in ascending order using
 *               the Counting sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */
void counting_sort(int *array, size_t size)
{
	int *countarray, index, instances;
	size_t i, maxval = 0;

	if (!array || size < 2)
                return;
	for (i = 0; i < size; i++)
	{
		if (array[i] > (int)maxval)
			maxval = array[i];
	}
	countarray = calloc(maxval + 1, sizeof(int));

	for (i = 0; i < size; i++)
	{
		index = array[i];
		countarray[index] += 1;
	}

	for (i = 1; i <= maxval + 1; i++)
		countarray[i] += countarray[i - 1];
	print_array(countarray, maxval + 1);

	for (i = 0; i <= maxval; i++)
		if (countarray[i] != countarray[i + 1] && countarray[i + 1])
		{
			instances = countarray[i + 1] - countarray[i];
			while (instances)
			{
				array[countarray[i] + instances - 1] = i + 1;
				instances--;
			}
		}
	free(countarray);
}
