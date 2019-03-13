#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - selects a 3-calc.h function based on input parameter
 * @s: the character to compare against
 * Return: the function associated to @s, OR 1 if no matches
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
