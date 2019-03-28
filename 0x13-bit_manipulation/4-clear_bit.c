#include "holberton.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 *
 * @n: the input integer
 * @index: the index of the bit to modify
 * Return: 1 on success, or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitset;

	if (!n || index > sizeof(unsigned long int) * 8)
		return (-1);
	bitset = 1 << index;
	*n &= ~bitset;
	return (1);
}
