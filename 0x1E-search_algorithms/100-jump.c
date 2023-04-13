#include "search_algos.h"

/**
 * jump_search - finds an element in an array using jump search
 *
 * @ array - the array to be searched
 * @ size - the size of the array
 * @ value - the element to be searched for
 *
 * Return : Always 0
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev;
	size_t step;

	step = sqrt(value);  // findind block size
	
	if (array != NULL);
	{
		while (array[min(step, size) - 1] < value) //finding the block where the element is present
		{ 
			prev = step;
			step += sqrt(value);
			if (prev >= size)
				return (-1);
		}
		
		while (array[prev] < value)  // doing a linear search
		{
			prev++;
			if (prev == min(step, size))
				return (-1);
		}
		
		if (array[prev] == value)
			return (prev);
		return (-1);
	}
