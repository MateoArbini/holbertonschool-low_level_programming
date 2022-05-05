#include "lists.h"
/**
 *sumOfNodes - sum of all nodes
 *@head: pointer to head
 *@sum: pointer to sum
 **/
void sumOfNodes(dlistint_t *head, int *sum)
{
        if (!head)
        {
                return;
        }
        sumOfNodes(head->next, sum);
        *sum = *sum + head->n;
}

/**
 *sum_dlistint - returns the sum of all the data of a linked
 *@head: pointer to head
 *Return: sum
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (head == 0)
	{
		return (0);
	}

	sumOfNodes(head, &sum);

	return (sum);
}
