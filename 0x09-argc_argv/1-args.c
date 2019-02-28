#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments passed in
 * @argv: an array of the arguments passed in
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
