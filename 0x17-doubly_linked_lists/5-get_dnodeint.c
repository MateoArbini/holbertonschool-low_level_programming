#include "lists.h"
/**
 *get_dnodeint_at_index - function that returns the nth node
 *@head: pointer to head
 *@index: number of the index to return
 *Return: current index
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current);
}
