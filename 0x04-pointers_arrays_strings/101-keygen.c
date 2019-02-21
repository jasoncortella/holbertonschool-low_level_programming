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
	int randint, randsmall;

	srand(time(0));

	while (count < 2772)
	{
		randint = rand() % (126 - 33) + 33;

		if (count + randint < 2772 - 159)
		{
			count += randint;
			putchar(randint);
		}
		else if (count + randint >= 2772 - 159 && count + randint <= 2772 - 126)
		{
			count += randint;
			putchar(randint);
			randsmall = rand() % (97 - 33) + 33;
			count += randsmall;
			putchar(randsmall);
		}
		else
		{
			count += (2772 - count);
			putchar(2772-count);
		}
	}

	printf("\n");

	return (0);
}
