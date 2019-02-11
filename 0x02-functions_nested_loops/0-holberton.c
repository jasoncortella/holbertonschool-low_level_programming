#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int i;
	char Holb[] = "Holberton";

	for (i = 0; i <= 8; i++)
	{
		_putchar(Holb[i]);
	}

	_putchar('\n');
	return (0);
}
