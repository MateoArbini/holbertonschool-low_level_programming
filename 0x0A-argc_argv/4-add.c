#include "main.h"
/**
 *main - multiplies the arguments
 *@argc: var type char. counter
 *@argv: var type char, array of pointers that point to a string
 *Return: 0 if there are not 2 var, otherwise 1
 **/
int main(int argc, char *argv[])
{
	int i, j;
	int res = 0;
	char *arr;

	if (argc - 1 == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			arr = argv[i];
			for (j = 0; arr[j] != '\0'; j++)
			{
				if (isdigit(arr[j] == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);
		}
		printf("%d", res);
	}
	return (0);
}
