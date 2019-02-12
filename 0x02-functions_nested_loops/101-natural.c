#include <stdio.h>

/**
 *main - find all multiples of 3 or 5 below 1024, and sum them
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, count = 0;

	for (i = 0; i < 1024 ; i++)
		if (i % 3 == 0 || i % 5 == 0)
			count = count + i;
	printf("%i\n", count);

	return (0);
}
