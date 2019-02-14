#include <stdio.h>

/**
 *main - finds and prints the largest prime factor of 612852475143
 *Return: Always 0(success)
 */

int main(void)
{
	int i = 2;
	long num = 612852475143;

	while (i * i < num)
	{
		if (num % i == 0)
		{
			num /= i;
			i = 2;
		}
		else
			i++;
	}

	printf("%lu\n", num);

	return (0);
}
