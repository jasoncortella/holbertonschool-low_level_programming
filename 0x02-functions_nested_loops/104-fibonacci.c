#include <stdio.h>

/**
 *main - find and print the first 98 fibonacci numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	long fib1 = 1, fib2 = 2, fib1a, fib1b, fib2a, fib2b;
	long split = 10000000000; /* long fails at fib 92, which has 20
				   * digits. 'split' will be used to split
				   * the number in half, digit wise
				   */

	printf("%lu", fib1);

	for (i = 1; i < 90; i++) /* print the first 90 fibonacci terms.
				  * this is the most that can be used with
				  * out breaking the split functionality
				  * below
				  */
	{
		printf(", %lu", fib2);
		fib2 = fib2 + fib1;
		fib1 = fib2 - fib1;
	}

	fib1a = fib1 / split;
	fib1b = fib1 % split;
	fib2a = fib2 / split;
	fib2b = fib2 % split;

	for (i = 90; i < 98; i++)
	{
		printf(", %lu%lu", (fib2a + fib2b / split), (fib2b % split));
		fib2a = fib2a + fib1a;
		fib2b = fib2b + fib1b;
		fib1a = fib2a - fib1a;
		fib1b = fib2b - fib1b;
	}

	printf("\n");

	return (0);
}
