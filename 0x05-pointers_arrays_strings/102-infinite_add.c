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
	int i, j, k, carry = 0, dig_n1, dig_n2, sum, length, temp;

	for (i = 0; n1[i] != '\0';)
		i++;
	for (j = 0; n2[j] != '\0';)
		j++;
	if (i + 1 >= size_r || j + 1 >= size_r)
		return (0);
	for (k = 0; i >= 0 || j >= 0; k++)
	{
		dig_n1 = dig_n2 = 0;
		if (i >= 0)
			dig_n1 = n1[i--] - '0';
		if (j >= 0)
			dig_n2 = n2[j--] - '0';
		sum = dig_n1 + dig_n2 + carry;
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[k] = (sum + '0');
	}
	if (carry == 1)
		r[k++] = (1 + '0');
	length = k -= 1;
	for (i = 0; i < (k + 1) / 2; i++)
	{
		temp = r[i];
		r[i] = r[k - i];
		r[k - i] = temp;
	}
	r[length] = '\0';
	return (r);
}
