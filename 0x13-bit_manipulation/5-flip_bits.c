#include "holberton.h"

/**
 * flip_bit - returns the number of bits that would need to be flipped to
 * get from one number to another
 *
 * @n: the first input integer
 * @m: the second input integer
 * Return: the number of bits required to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, diff = n ^ m;

	for (; diff; diff >>= 1)
		count += (diff & 1);
	return (count);
}
