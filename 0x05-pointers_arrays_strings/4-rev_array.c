#include "holberton.h"

/**
 *reverse_array - reverses an array of integers
 *@a: the array to be reversed
 *@n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	n -= 1;

	for (i = 0; i < (n + 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
