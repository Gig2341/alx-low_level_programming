#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size : size of the array
 *
 * Return : pointer to the new hash table
 */

 hash_table_t *hash_table_create(unsigned long int size)
 {
	unsigned long int i;
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));

	if (new_hash_table == NULL)
		return NULL;
	
	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t) * size);

	if (new_hash_table -> array == NULL)
		return NULL;

	for(i = 0; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}

	return (new_hash_table);
 }
