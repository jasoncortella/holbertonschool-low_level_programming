#include <stdio.h>

/**
 *main - find and print the first 50 fibonacci numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2;

	printf("%lu", fib1);
	printf(", %lu", fib2);
	for (i = 3; i <= 50; i++)
	{
		fib2 = fib2 + fib1;
		fib1 = fib2 - fib1;
		printf(", %lu", fib2);
	}
	printf("\n");

	return (0);
}
