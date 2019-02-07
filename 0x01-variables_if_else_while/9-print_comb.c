#include <stdio.h>
/**
 *main - print all single digit numbers of base 10 starting at 0
 *       without using char, using putchar, separated by commas
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
