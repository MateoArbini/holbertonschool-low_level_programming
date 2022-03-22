#include "lists.h"
/**
 *add_nodeint_end - function that adds a new node at the end of a list_t list
 *First we create the new node and the aux, which we will use to move forward
 *to the end of the linked list, then we asign the memory for this new space,
 *and then, we copy the elements for the new node. Afterall, we ask if the head
 *is null, in that case, we have to equalise the head with the new node,
 *beacuse it is the only node in the linked list, so that node its going to be
 *the first one, and the last one.
 *@head: pointer that points to the address of head
 *@n: var type int of each node
 *Return: newnode
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux;
	listint_t *newnode;

	newnode = (struct listint_s *) malloc(sizeof(struct listint_s));

	if (newnode != NULL)
	{
		newnode->next = NULL;

		newnode->n = n;
	}
	else
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = newnode;
	}
	return (newnode);
}
