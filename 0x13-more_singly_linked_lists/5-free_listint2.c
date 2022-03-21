#include "lists.h"
/**
 *free_listint2 - function that frees a list_t list
 *The function sets the head to NULL
 *@head: pointer to a node
 **/
void free_listint2(listint_t **head)
{
	struct listint_s *aux, *aux2;

	aux2 = *head;

	while (cnode)
	{
		aux = aux2->next;
		free(aux2);
		aux2 = aux;
	}
	*head = NULL;
}
