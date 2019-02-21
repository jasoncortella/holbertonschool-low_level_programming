#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *main - generates random valid passwords for 101-crackme
 *Return: Always 0 (success)
 */

int main (void)
{
	int count = 0;
	int randint;

	srand(time(0));

	while (2772 - 126 > count)
	{
		randint = rand() % (126 - 33) + 33;
		putchar(randint);
		count += randint;
	}

	putchar(2772 - count);

	return (0);
}
