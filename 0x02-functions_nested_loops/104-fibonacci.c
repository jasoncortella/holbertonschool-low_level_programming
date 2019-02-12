#include <stdio.h>

/**
 *main - find and print the first 98 fibonacci numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	long fib1 = 1, fib2 = 2;

	printf("%lu", fib1);

	for (i = 1; i < 98; i++)
	{
		printf(", %lu", fib2);
		fib2 = fib2 + fib1;
		fib1 = fib2 - fib1;
	}

	printf("\n");

	return (0);
}
