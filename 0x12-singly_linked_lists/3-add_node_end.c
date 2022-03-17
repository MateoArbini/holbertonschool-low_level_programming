#include "lists.h"
/**
 *add_node_end - function that adds a new node at the end of a list_t list
 *First we create the new node and the aux, which we will use to move forward
 *to the end of the linked list, then we asign the memory for this new space,
 *and then, we copy the elements for the new node. Afterall, we ask if the head
 *is null, in that case, we have to equalise the head with the new node,
 *beacuse it is the only node in the linked list, so that node its going to be
 *the first one, and the last one.
 *@head: pointer that points to the address of head
 *@str: string of each node
 *Return: newnode
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux = *head;
	list_t *newnode;

	newnode = (struct node *) malloc(sizeof(struct node));

	if (newnode != NULL)
	{
		newnode->str = strdup(str);

		newnode->next = NULL;

		newnode->len = (strlen(str));
	}
	else
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = newnode;
	return (newnode);
}
