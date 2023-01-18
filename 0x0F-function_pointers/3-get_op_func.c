#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - the function that selects the correct function
 * to perform the operation asked by the user.
 * @s: the operator passed as arg to the program
 * Return: NULL or otherwise
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
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}
