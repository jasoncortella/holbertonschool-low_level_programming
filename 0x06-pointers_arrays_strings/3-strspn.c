#include "holberton.h"

/**
 **_strspn - gets the length of a prefix substring
 *@s: the string to check
 *@accept: the characters (bytes) that can be accepted
 *Return: (count) the length of the initial matching set
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, gonext;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		gonext = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				gonext = 1;
				count++;
			}
		}
		if (gonext == 0)
			return (count);
	}
	return (0);
}
