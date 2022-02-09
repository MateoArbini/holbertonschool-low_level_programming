#include "main.h"
/**
 *main - pone fizz en los multi de 3, buzz en 5 y ambos
 *Return: 0
 **/
int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
		if (a == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
