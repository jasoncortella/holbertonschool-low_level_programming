#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - the sums of diagonals
 *@a: the input board array
 *@size: the board size
 */

void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(size * i) + i];
		d2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%i, %i\n", d1, d2);
}
