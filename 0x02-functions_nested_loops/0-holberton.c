#include "holberton.h"

/**
 *main - print the alphabet in lowercase, 10 times
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char holb[] = "Holberton";
	int strLength = sizeof(holb) / (sizeof(holb[0]));

	for (i = 0; i < (strLength - 1) ; i++)
	{
		_putchar(holb[i]);
	}

	_putchar('\n');
	return (0);
}
