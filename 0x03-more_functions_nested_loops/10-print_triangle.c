#include "holberton.h"

/**
 *print_triangle - prints a triangle made of the # character
 *@size: size is numnber of rows the triangle fills
 *Return: Always 0(success)
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = i; j < (size - 1); j++)
			_putchar(' ');
		for (j = 0; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}

}
