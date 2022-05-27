#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_delete - function that deletes a hash table
 *@ht: hash table to delete
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL;
	hash_node_t *aux = NULL;

	if (ht == NULL)
	{
		return;
	}
	if (ht->array == NULL)
	{
		free(node);
		return;
	}
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			aux = node->next;
			if (node->key != NULL)
			{
				free(node->key);
			}
			if (node->value != NULL)
			{
				free(node->value);
			}
			free(node);
			node = aux;
		}
		i++;
		free(node);
	}
	free(ht->array);
	free(ht);
}
