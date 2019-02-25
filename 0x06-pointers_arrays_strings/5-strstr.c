#include "holberton.h"
#include <stdio.h>

/**
 **_strstr - locates a substring
 *@haystack: the string to be searched
 *@needle: the string to search for
 *Return: (s) a pointer to the first matching instance, or 0 if no matches
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; haystack != '\0'; haystack++)
	{
		if (haystack[0] == needle[0])
		{
			i = 0;
			while (needle[i] == haystack[i])
				i++;
			if (needle[i] == '\0')
				return (haystack);
		}
	}

	return (NULL);
}
