#include "holberton.h"

/**
 **_memcpy - copies memory area
 *@dest: the memory area to be copied to
 *@src: the memory area to be copied
 *@n: the amount of bytes to be filled
 *Return: (dest) a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
