#include "lists.h"
/**
 *list_len - function that returns you the amount of elements
 *@h: pointer to the first node, of type list_t, which is the type of the
 *structure
 *Return: count, which is the amount of elements linked in list_t list
 **/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
