#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - function that prints a name
 *@name: parameter of function
 *@f: pointer of a function
 *Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
		f(name);
}
