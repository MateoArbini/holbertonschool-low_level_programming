#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_op_func - function that selects the correct function to perform the
 *operation asked by the user
 *@s: operator passed as an argument to the program
 *Return: if the operator is correct, return the function, otherwise NULL
 **/
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

	while (ops[i].op != NULL)
	{
		if (*S == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
