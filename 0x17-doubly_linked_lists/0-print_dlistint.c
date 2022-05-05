#include "lists.h"
#include "stddef.h"
#include "stdio.h"
/**
 *print_dlistint - function that prints all the elements of a list
 *@h: pointer
 *Return: count
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		count++;
	}
	return (count);	
}
