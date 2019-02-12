#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: The character to input
 *
 *Return: lastdigit, the last digit of the input
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;
	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar('0' + lastdigit);
	return (lastdigit);
}
