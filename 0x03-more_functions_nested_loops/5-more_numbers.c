#include "holberton.h"

/**
 *more_numbers - prints the numbers from 0 to 14, 10 times
 *Return: Always 0(success)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');

			_putchar('0' + j % 10);
		}

		_putchar('\n');
	}
}
