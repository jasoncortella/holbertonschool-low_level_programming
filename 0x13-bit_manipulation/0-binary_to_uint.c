#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 *@b: a string containing the binary number
 *Return: the converted unsigned int, or 0 if there are one or more chars
 * in the string that are not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, factor = 1, sum = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);
	for (; i; i--, factor *= 2)
		sum += (b[i - 1] - '0') * factor;
	return (sum);
}
