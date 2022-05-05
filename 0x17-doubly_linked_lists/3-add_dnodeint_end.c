#include "lists.h"
/**
 *
 *
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
	}
	else
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = newnode;
	return (newnode);
}
