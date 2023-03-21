#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the corresponding function
 * @s: input sign
 * Return: null of a pointer to a function
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
	while (i != 4)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);

}
