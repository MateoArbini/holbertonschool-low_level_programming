#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node
 *of a listint_t linked list.
 *@head: pointer to the first node
 *@index: index of the node, which starts at 0
 *Return: current, which is the nth node of a listint
 *linked list
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	struct listint_s *current = head;

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
