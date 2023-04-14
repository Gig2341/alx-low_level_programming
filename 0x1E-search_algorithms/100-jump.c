#include "search_algos.h"

/**
 * jump_search - finds an element in an array using jump search
 *
 * @ array - the array to be searched
 * @ size - the size of the array
 * @ value - the element to be searched for
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = 0, i = 0;

	if (array != NULL)
	{
		while (step < size && array[step] < value)
		{
			prev = step;
			step = step + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       prev, array[prev]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       prev, step);
		for (i = prev; i <= step; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
