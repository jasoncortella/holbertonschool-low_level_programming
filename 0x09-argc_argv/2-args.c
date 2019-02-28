#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: the number of arguments passed in
 * @argv: an array of the arguments passed in
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
