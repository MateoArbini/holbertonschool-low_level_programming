#include "lists.h"
/**
 *add_nodeint - function that cretes a new node at the
 * beginning of a list_t list
 *@head: pointer that points to the address of head
 *@n: int of each node
 *Return: the address of the new element, or NULL if it failed
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *new_node = (struct listint_s *) malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->next = (*head);

		new_node->n = n;

		(*head) = new_node;
	}
	else
	{
		return (NULL);
	}
	return (*head);
}
