#include "main.h"
/**
 *main - multiplies the arguments
 *@argc: var type char. counter
 *@argv: var type char, array of pointers that point to a string
 *Return: 0 if there are not 2 var, otherwise 1
 **/
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
