#include "holberton.h"

/**
 **infinite_add - adds two numbers
 *@n1: the first character to add
 *@n2: the second character to add
 *@r: the buffer that will store the result
 *@size_r: the buffer size
 *Return: 0 if the sum cannot be stored, else the sum of the two numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j,sizen1 = 0, sizen2 = 0, new;
	char *s = r;

	for (i = 0; n1[i] != '\0'; i++)
		sizen1++;
	for (i = 0; n2[i] != '\0'; i++)
		sizen2++;

	if (sizen1 > size_r || sizen2 > size_r)
		return (0);

	if (sizen1 > sizen2)
	{
		for (i = 0; i < sizen1; i++)
			r[i] = n1[i];
		for (j = (sizen1 - sizen2); j < sizen1; j++)
		{
			new = r[j] + n2[j - sizen2] - '0';
			if (new > '9')
			{
				r[j] = new - 10;
				r[j - 1] += 1;
			}
			else
				r[j] = new;
		}
	}
	return(s);
}
