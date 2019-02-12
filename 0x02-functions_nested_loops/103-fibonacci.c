#include <stdio.h>

/**
 *main - find and print the sum of even fiboacci numbers up to 4000000
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int fib0 = 0, fib1 = 1, count = 0;

	while (fib1 < 4000000)
	{
		if (fib1 % 2 == 0)
			count += fib1;
		fib1 = fib1 + fib0;
		fib0 = fib1 - fib0;
	}

	printf("%i\n", count);

	return (0);
}
