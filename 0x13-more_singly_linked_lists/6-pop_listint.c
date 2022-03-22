#include "lists.h"
/**
 *pop_listint - function that deletes the head node of a listint_t linked
 *list, and returns the head node’s data (n).
 *if the linked list is empty return 0
 *@head: pointer to a node
 *Return: result which is *head->n
 **/
int pop_listint(listint_t **head)
{
	struct listint_s *aux;

	int i;

	if (*head == NULL)
	{
		return (0);
	}

	aux = *head;
	i = aux->n;
	*head = aux->next;

	free(aux);

	return (i);
}
