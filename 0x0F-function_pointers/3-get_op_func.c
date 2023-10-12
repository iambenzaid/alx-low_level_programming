#include "3-calc.h"

/**
* get_op_func - The function the choose what is the right function
* @s: operator
*
* Return: operator
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

	while (ops[i].op != 0)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
	i++;
	}
	return (0);
}
