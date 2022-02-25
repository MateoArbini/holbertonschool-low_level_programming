#include "main.h"
/**
 *main - prints all arguments it receives
 *@argc: unused var
 *@argv: array of pointers that point to a string type char
 *Return: 0
 **/
int main(int __attribute__((unused)) argc, char *argv[])
{
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
