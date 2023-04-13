#include "search_algos.h"

/**
 * linear_search - performs a linear search on an array
 *
 * Args: array 
 * 	size
 * 	value
 *
 * return: Always 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for ( i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%u]\n", i, array[i]);
			if (value == array[i])
			{
				printf("Found %d at index: %lu", value , i);
				return 0;
			}
		}
	}
	return (-1);
}		
