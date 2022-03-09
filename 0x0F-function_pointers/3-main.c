#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that performs simple operations
 *@argc: argument counter
 *@argv: arguments given
 *Return: if conditions are ok, return result, otherwise 98, 99 or 100
 **/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
		(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
