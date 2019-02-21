#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *main - generates random valid passwords for 101-crackme
 *Return: Always 0 (success)
 */

int main (void)
{
	int i, count = 0;
	int randint;
	char password[100];

	srand(time(0));

	while (count < 2772)
	{
		randint = rand() % (126 - 33) + 33;

		if (count + randint < 2772 - 200)
		{
			count += randint;
			putchar(randint);
		}
		else if (count + randint >= 2772 - 200 && count + randint <= 2772 - 126)
		{
			count += randint;
			putchar(randint);
			count += 80;
			putchar(80);
		}
		else
		{
			count += (2772 - count);
			putchar(2772-count);
		}
	}

	printf("\ncount 1 = %i\n", count);

	printf("\n");

	return (0);
}
