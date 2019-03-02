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
		printf("Error\n");
	if (atoi(argv[argc - 1]) < 0)
		printf("0\n");
	if ((argc - 2) || (atoi(argv[1]) < 0))
		return (1);
	change = atoi(argv[1]);
	for (i = 0; change; i++)
		for (; change >= coins[i]; numcoins++)
			change -= coins[i];
	printf("%i\n", numcoins);
	return (0);
}
