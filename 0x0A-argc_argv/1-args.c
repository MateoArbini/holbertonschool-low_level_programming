#include "main.h"
/**
 *main - prints the number of argumetns passed into it
 *@argc: counter of arguments. We should rest 1 to argc, because it counts
 *starting in 1 instead of 0.
 *@argv: unused var char
 *Return: 0
 **/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
