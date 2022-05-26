#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table that you want to add or update
 * @key: cant be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *search_node = NULL;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	search_node = ht->array[index];

	while (search_node != NULL)
	{
		if (strcmp(search_node->key, key) == 0)
		{
			free(search_node->value);
			search_node->value = strdup(value);
			free(new_node);
			return (1);
		}
		search_node = search_node->next;
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
