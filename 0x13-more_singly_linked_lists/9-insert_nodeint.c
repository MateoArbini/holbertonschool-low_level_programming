#include "lists.h"
/**
 *insert_nodeint_at_index - function that inserts a new node
 *at a given position
 *@head: pointer to a pointer that points to the head
 *@idx: index
 *@n: element of the node
 *Return: address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	unsigned int size = 0;

	struct listint_s *newnode = (struct listint_s *) malloc(sizeof(listint_t));

	if (newnode != NULL)
	{
		newnode->n = n;
	}
	else
	{
		return (NULL);
	}

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx < 1 || idx > size + 1)
	{
		return (NULL);
	}
	while (idx--)
	{
		if (idx == 0)
		{
			aux->next = *head;
			*head = aux;
			aux->n = n;
		}
		else
		{
			head = &(*head)->next;
		}
		size++;
	}
	return (aux);
}
