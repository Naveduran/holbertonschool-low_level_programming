#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the content to search for
 * Return: -1 if value is not present in array or if array is NUL.
 * either, it returns the index of the array where the elemt is located.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index = 0;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
