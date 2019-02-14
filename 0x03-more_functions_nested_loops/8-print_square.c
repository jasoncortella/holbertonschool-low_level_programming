#include "holberton.h"

/**
 *print_square - prints a square made of the # character
 *@size: size is numnber of rows and columns in the square
 *Return: Always 0(success)
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}

}
