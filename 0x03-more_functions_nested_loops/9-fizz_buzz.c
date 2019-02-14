#include <stdio.h>

/**
 *main - prints the numbers fom 1 to 100, replaceing multiples of 3 and 5
 *       with fizz and buzz, respectively.
 *Return: Always 0(success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 == 0 || i % 5 == 0)
			printf(" ");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%i ", i);
	}
	printf("\n");
	return (0);
}
