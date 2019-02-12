#include "holberton.h"

/**
 *jack_bauer - prints every minute of every day
 */

void jack_bauer(void)
{
	int min, hour, hour_a, hour_b, min_a, min_b;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			hour_a = hour / 10;
			hour_b = hour % 10;
			min_a = min / 10;
			min_b = min % 10;

			_putchar('0' + hour_a);
			_putchar('0' + hour_b);
			_putchar(':');
			_putchar('0' + min_a);
			_putchar('0' + min_b);
			_putchar('\n');
		}
	}
}
