#include "3-calc.h"

/**
 * op_add - adds @a and @b and returns the sum
 *
 * @a: the first argument
 * @b: the second argument
 * Return: the sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts @b from @a and returns the difference
 * @a: the first argument
 * @b: the second argument
 * Return: the difference between @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies @a and @b and returns the product
 * @a: the first argument
 * @b: the second argument
 * Return: @a multiplied by @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides @a by @b and returns the result
 * @a: the first argument
 * @b: the second argument
 * Return: @a divided by @b
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - divides @a by @b and returns the remainder
 * @a: the first argument
 * @b: the second argument
 * Return: the modulo of @a and @b
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
