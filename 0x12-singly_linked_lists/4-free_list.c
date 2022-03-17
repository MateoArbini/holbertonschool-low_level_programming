#include "lists.h"
/**
 *free_list - function that frees a list_t list
 *@head: pointer to a node
 **/
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux->len);
		free(aux->next);
		free(aux);
	}
}
