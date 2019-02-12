#include "holberton.h"

/**
 *times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, result, digitcheck, result_i, result_j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			result_i = result / 10;
			result_j = result % 10;
			digitcheck = result / 10;
			if (digitcheck < 1 && j == 0)
				_putchar('0' + result);
			else if (digitcheck < 1)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result_j);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + result_i);
				_putchar('0' + result_j);
			}
		}
		_putchar('\n');
	}
}
