#include "holberton.h"

/**
 *print_times_table - prints the 9 times table, starting with 0
 *@n: integer to set the times table upper limit
*/

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		n = n;
	else
	{
		for (i = 0; i <= n ; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					_putchar('0');
				else if (j != 0 && (i * j) <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (i * j));
				}
				else if ((i * j) >= 10 && (i * j) <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (i * j) / 10);
					_putchar('0' + (i * j) % 10);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (i * j) / 100);
					_putchar('0' + ((i * j) / 10) % 10);
					_putchar('0' + (i * j) % 10);
				}
			}
			_putchar('\n');
		}
	}
}
