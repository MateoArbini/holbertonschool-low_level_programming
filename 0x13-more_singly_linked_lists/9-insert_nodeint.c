#include "lists.h"
/**
 *insert_nodeint_at_index - function that inserts a
 *new node at a given position
 *@head: pointer that points to the head node of the list
 *@idx: is the index of the list where the new node should be added. Index
 *starts at 0
 *@n: var type int of each node
 *Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	struct listint_s *temp2 = (struct listint_s *) malloc(sizeof(listint_t));

	struct listint_s *temp = *head;

	temp2->n = n;
	temp2->next = NULL;
	if (temp2 == NULL)
	{
		return (NULL);
	}

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	temp2->next = temp->next;
	temp->next = temp2;

	return (temp2);
}
