#include <stdio.h>
#include <stdlib.h>
/**
 * main - makes change for input number (US currency)
 * @argc: number of arguments
 * @argv: string array of arguments
 * Return: 0 on Success, 1 on Error
 */
int main(int argc, char **argv)
{
	int i, change, numcoins = 0, coins[5] = {25, 10, 5, 2, 1};

	if (argc - 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
		printf("0\n");
	for (i = 0; change > 0; i++)
		while (change >= coins[i])
		{
			change -= coins[i];
			numcoins++;
		}
	if (numcoins > 0 )
		printf("%i\n", numcoins);
	return (0);
}
