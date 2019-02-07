#include <stdio.h>
/**
 *main - print all unique combinatons of two digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, n = 1, count = 0;

	for (i = count; i < 10; i++)
	{
		for (n = (count + 1); n < 10; n++)
		{
			putchar(i + '0');
			putchar(n + '0');

			if (i < 9 && n < 10 && (i + n) < 17)
			{
				putchar(',');
				putchar(' ');
			}
		}

		count++;
	}

	putchar('\n');

	return (0);
}
