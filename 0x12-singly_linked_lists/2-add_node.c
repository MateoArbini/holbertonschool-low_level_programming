#include "lists.h"
/**
 *add_node - function that cretes a new node at the beginning of a list_t list
 *@head: pointer that points to the address of head
 *@str: string of each node
 *Return: chars impresed of each string of each node
 **/
list_t *add_node(list_t **head, const char *str)
{

	struct node *new_node = (struct node *) malloc(sizeof(struct node));

	if (newnode != NULL)
	{
		new_node->str = strdup(str);

		new_node->next = (*head);

		new_node->len = (strlen(str));

		(*head) = new_node;
	}
	else
	{
		return (NULL);
	}
	return (*head);
}

