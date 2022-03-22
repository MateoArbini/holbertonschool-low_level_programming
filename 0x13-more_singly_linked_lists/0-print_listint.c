#include "lists.h"
/**
 *print_listint - function that prints the data of each node
 *@h: pointer to the first node, of type list_t, which is the type of the
 * structure what we do here, is first, we ask if the head exist, if it is
 *correct, then it will impress the content and then h its going to move
 *to the next node, and so on to the tail, which is the last node.
 *Return: count, which is the Amount of nodes, which is a var of type size_t
 **/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
