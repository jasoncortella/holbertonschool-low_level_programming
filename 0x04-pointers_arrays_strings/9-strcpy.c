#include "holberton.h"

/**
 **_strcpy - copies the string pointed to by src, including '\0'
 *@dest: the destination string to be copied to
 *@src: the source string to be copied from
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = src[i];

	return (dest);
}
