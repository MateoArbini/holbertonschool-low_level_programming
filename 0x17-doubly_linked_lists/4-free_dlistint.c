#include "lists.h"
/**
 *free_dlistint - function that frees a list
 *@head: pointer to a head
 **/
void free_dlistint(dlistint_t *head)
{
	void *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
