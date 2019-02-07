#include <stdio.h>
/**
 *main - print all unique combinatons of three digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, count = 0;

	for (i = count; i < 10; i++)
	{
		for (j = (count + 1); j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if ((i + j < 17))
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
