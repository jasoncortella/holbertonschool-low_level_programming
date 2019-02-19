#include "holberton.h"
#include <stdio.h>

/**
 *print_array - prints the first n elements of array a
 *@a: the array of integers
 *@n: the amount of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		printf("%d", a[0]);

	for (i = 1; i < n; i++)
		printf(", %d", a[i]);

	printf("\n");
}
