#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - finds the largest palindrome result of two 3 digit numbers
 * Return: Nothing
 */
int main(void)
{
	int i, j;
	char *str;
	char buffer[6];
	int pal;
	int palmax = 0;

	for (i = 0; i <= 999; i++)
		for (j = 0; j <= 999; j++)
		{
			snprintf(buffer, 10, "%d", i * j);
			if (is_palindrome(buffer))
			{
				pal = atoi(buffer);
				if (pal > palmax)
				{
					palmax = pal;
					printf("New max palindrome found. %i * %i = %i\n", i, j, i * j);
				}

			}
		}
}

/**
 *palcheck - checks if digit is the same as its palinbuddy
 *@s: the string to check if palindrome
 *@n: the length of the string
 *Return: 1 if a factor is found, 0 otherwise
 */

int palcheck(char *s, int n)
{
	if (*s != *(s + n - 1))
		return (0);
	else if (n >= 0)
		return (palcheck(s + 1, n - 2));
	return (1);
}

/**
 *_strlen_recursion - returns the length of a string
 *@s: the string to be checked
 *Return: the length of the sting
 */

int _strlen_recursion(char *s)
{
	if (*s++ == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s));
}

/**
 *is_palindrome - checks if a string is a palindrome
 *@s: the string to check
 *Return: 1 if the number is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palcheck(s, _strlen_recursion(s)));
}
