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
		printf("Error\n");
	if (atoi(argv[argc - 1]) < 0)
		printf("0\n");
	if ((argc - 2) || (atoi(argv[1]) < 0))
		return (1);
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
