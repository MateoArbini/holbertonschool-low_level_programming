#include "lists.h"
/**
 *sumOfNodes - function to recursively find the sum of nodes of the given list
 *@head: pointer to the first node
 *@sum: var type pointer named sum
 **/
void sumOfNodes(struct listint_s *head, int *sum)
{
	if (!head)
	{
		return;
	}
	sumOfNodes(head->next, sum);
	*sum = *sum + head->n;
}
/**
 *sum_listint - function that returns the sum of all the data (n) of a
 *listint_t linked list.
 *@head: pointer to the head of the linked list
 *Return: the sum of all the data (n) of the linked list
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
	{
		return (0);
	}

	sumOfNodes(head, &sum);

	return (sum);
}
