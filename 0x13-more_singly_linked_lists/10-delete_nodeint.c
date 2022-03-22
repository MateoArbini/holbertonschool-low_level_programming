#include "lists.h"
/**
 *delete_nodeint_at_index - function that deletes the node at index
 *of a listint_t linked list
 *@head: pointer that point to the head node of the list
 *@index: index of the list
 *Return: 1 if it frees, -1 otherwise
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;

	listint_t *next;

	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	aux = *head;

	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}
	for (; aux != NULL && i < index - 1; i++)
		aux = aux->next;

	if (aux == NULL || aux->next == NULL)
		return (-1);

	next = aux->next->next;
	free(aux->next);
	aux->next = next;

	return (1);
}
