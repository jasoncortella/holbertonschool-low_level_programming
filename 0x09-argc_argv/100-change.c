#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the minimum nomuber of coins to make change
 *
 * Return: 0 on success, 1 if incorrect arguments passed in
 */
int main(int argc, char *argv[])
{
	int change, numcoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change >= 25)
	{
		change -= 25;
		numcoins += 1;
	}
	while (change >= 10)
	{
		change -= 10;
		numcoins += 1;
	}
	while (change >= 5)
	{
		change -= 5;
		numcoins += 1;
	}
	while (change >= 2)
	{
		change -= 2;
		numcoins += 1;
	}
	while (change >= 1)
	{
		change -= 1;
		numcoins += 1;
	}
	printf("%i\n", numcoins);
	return (0);
}
