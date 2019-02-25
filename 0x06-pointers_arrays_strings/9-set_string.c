#include "holberton.h"

/**
 *set_string - sets the value of a pointer to a char
 *@s: pointer to pointer char s
 *@to: pointer to char to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
