#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - generate random int, print the int's last digit and sign
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	printf("Last digit of %i is %i and is ", n, lastDigit);
	if (lastDigit > 5)
		printf("greater than 5");
	else if (lastDigit == 0)
		printf("0");
	else
		printf("less than 6 and not 0");
	printf("\n");
	return (0);
}
