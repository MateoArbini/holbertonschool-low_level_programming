#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *pr_char - function that prints a char
 *@c: chars given
 **/
void pr_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 *pr_int - function that prints integers
 *@i: integers given
 **/

void pr_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 *pr_float - function that prints variables type float
 *@f: variables of type float given
 **/

void pr_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 *pr_charpoint - function that prints pointers
 *@s: pointers given
 **/
void pr_charpoint(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 *print_all - function that prints anything
 *@format: agruments given of differents types of variables
 **/
void print_all(const char * const format, ...)
{
	int i;
	int e;
	char *separator = "";

	va_list list;

	vtype vartype[] = {
		{'c', pr_char},
		{'i', pr_int},
		{'f', pr_float},
		{'s', pr_charpoint},
		{'\0', NULL}
	};

	va_start(list, format);

	e = 0;
	while (format != NULL && format[e] != '\0')
	{
		i = 0;
		while (vartype[i].type != '\0')
		{
			if (vartype[i].type == format[e])
			{
				printf("%s", separator);
				vartype[i].func(list);
				separator = ", ";
			}
			i++;
		}
		e++;
	}
	va_end(list);
	printf("\n");
}
