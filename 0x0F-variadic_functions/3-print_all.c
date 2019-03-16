#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @c: the character to be printed
 * Return: nothing
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints an integer
 * @i: the integer to be printed
 * Return: nothing
 */
void print_int(va_list valist)
{
	printf("%i", va_arg(valist, int));
}

/**
 * print_float - prints a floating point
 * @f: the float to be printed
 * Return: nothing
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_str - prints a string
 * @s: the string to be printed
 * Return: nothing
 */
void print_str(va_list valist)
{
	char *cpy = va_arg(valist, char *);

	if (cpy)
	{
		printf("%s", cpy);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - prints anything, by calling other functions
 * @format: a string containing the cariable types passed in to be printed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j;
	char *separator = "";
	print_table p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(valist, format);

	while (format && format[i])
	{
		j = 0;
		while (p[j].type)
		{
			if (*p[j].type == format[i])
			{
				printf("%s", separator);
				p[j].func(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(valist);

	printf("\n");
}
