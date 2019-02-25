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

	if (needle[0] == '\0')
		return (haystack);

	for (; haystack != '\0'; haystack++)
	{
		if (haystack[0] == needle[0])
		{
			i = 0;
			while (needle[i] == haystack[i] && haystack[i] != '\0')
				i++;
			if (needle[i] == '\0')
				return (haystack);
		}
	}

	return (NULL);
}
