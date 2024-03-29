#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lower = 0;
	size_t upper = size - 1;
	size_t pos = 0;

	if (array != NULL)
	{
		while ((array[upper] != array[lower]) &&
		       (value >= array[lower]) &&
		       (value <= array[upper]))
		{
			pos = lower + (((double)(upper - lower) / (array[upper] - array[lower])) *
				     (value - array[lower]));
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				lower = pos + 1;
			else if (value < array[pos])
				upper = pos - 1;
			else
				return (pos);
		}
		if (value == array[lower])
			return (lower);
		pos = lower + (((double)(upper - lower) / (array[upper] - array[lower]))
			     * (value - array[lower]));
		printf("Value checked array[%lu] is out of range\n", pos);
	}
	return (-1);
}
