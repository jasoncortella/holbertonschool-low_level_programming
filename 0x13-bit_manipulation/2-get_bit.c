#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the input integer
 * @index: the index of the bit to return
 * Return: the bit at the specified index, or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return (n >> index & 1);
}
