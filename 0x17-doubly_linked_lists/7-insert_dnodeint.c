#include "lists.h"
/**
 *insert_dnodeint_at_index - function that inserts a new node
 *at a given position
 *@h: pointer to a pointer
 *@idx: index
 *@n: element of the node
 *Return: address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	dlistint_t *newnode;
	unsigned int size = 0;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
	}
	else
		return (NULL);
	if (h == NULL)
	{
		free(newnode);
		return (NULL);
	}
	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	while (size < (idx - 1))
	{
		aux = aux->next;
		size++;
		if (aux == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = aux->next;
	newnode->next->prev = newnode;
	aux->next = newnode;
	newnode->prev = aux;

	return (newnode);
}
