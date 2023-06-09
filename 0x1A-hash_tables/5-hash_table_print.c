#include "./hash_tables.h"

/**
 * hash_table_print - Prints hash table
 * @ht: A pointer to the hash table to be printed
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	/* declaration of variables */
	hash_node_t *node;
	unsigned long int i;
	unsigned char print_comma = 0;

	/* check validity of ht */
	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (print_comma == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("%s: %s", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			print_comma = 1;
		}
	}
	printf("}\n");
}
