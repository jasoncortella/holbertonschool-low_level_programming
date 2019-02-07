#include <stdio.h>
/**
 *main - print all single digit numbers of base 10 starting at 0
 *       without using char, using putchar, separated by commas
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
		for (n = 0; n < 10; n++)
		{
			putchar(i + '0');
			putchar(n + '0');

			if (i < 10 && n < 10 && (i + n) < 18)
			{
				putchar(',');
				putchar(' ');
			}
		}

	putchar('\n');

	return (0);
}
