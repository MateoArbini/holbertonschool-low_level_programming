#include "lists.h"
/**
 *
 *
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	unsigned int size = 0;
	
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
