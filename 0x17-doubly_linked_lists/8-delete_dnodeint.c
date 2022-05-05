#include "lists.h"
/**
 *delete_dnodeint_at_index - function that delets a node at certain position
 *@head: pointer that points to the header
 *@index: index
 *Return: 1 or -1
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = NULL;
	unsigned int cont = 0;

	if (*head == NULL)
		return (-1);
	aux = *head;
	while (cont < index && aux != NULL)
	{
		aux = aux->next;
		cont++;
	}
	if (cont == index)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(aux);
			return (1);
		}
		if (aux == (*head))
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(aux);
			return (1);
		}
		if (aux->next == NULL)
		{
			aux->prev->next = NULL;
			free(aux);
			return (1);
		}
		aux->next->prev = aux->prev;
		aux->prev->next = aux->next;
		free(aux);
		return (1);
	}
	return (-1);
}
