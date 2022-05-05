#include "lists.h"
/**
 *add_dnodeint - function that add a new node
 *@head: pointer to a pointer
 *@n: data of the node
 *Return: pointer to head
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		(*head) = new_node;
	}
	return (new_node);
}
