#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the minimum nomuber of coins to make change
 * @argc: the number of arguments passed in
 * @argv: string of the arguments passed in
 * Return: 0 on success, 1 if incorrect arguments passed in
 */
int main(int argc, char *argv[])
{
	int i, change, numcoins = 0, coins[5] = {25, 10, 5, 2, 1};

	if (argc - 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}
	change = atoi(argv[1]);
	for (i = 0; change; i++)
		while (change >= coins[i])
		{
			change -= coins[i];
			numcoins++;
		}
	printf("%i\n", numcoins);
	return (0);
}
