#include "lists.h"
/**
 *free_listint - function that frees a list_t list
 *@head: pointer to a node
 **/
void free_listint(listint_t *head)
{
	void *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
