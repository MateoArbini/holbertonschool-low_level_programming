#include "lists.h"
/**
 *print_list - function that prints the data of each node
 *@h: pointer to the first node, of type list_t, which is the type of the
 * structure what we do here, is first, we ask if the head exist, if it is
 *correct, then it will impress the content and then h its going to move
 *to the next node, and so on to the tail, which is the last node.
 *Return: Amount of nodes, which is a var of type size_t
 **/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
