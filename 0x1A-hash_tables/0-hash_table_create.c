#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *hash_table_create - function that creates a hash table
 *@size: size of the array
 *Return: new hash
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;
	unsigned int i = 0;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	new_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (size == 0)
		return (NULL);
	new_hash->size = size;
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}

	return (new_hash);
}
