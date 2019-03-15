#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *cpy;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		cpy = va_arg(valist, char *);
		if (cpy)
			printf("%s", cpy);
		else
			printf("(nil)");
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}

	va_end(valist);

	printf("\n");
}
