#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: ..
 * @size: the number of elements in the array array
 * @cmp:  a pointer to the function to be used to compare values
 * Return:index of first element for which the cmp function does not return 0
 * If no element matches, return -1. If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (!array || size <= 0)
		return (-1);
	if (*cmp)
	{
		for(counter = 0; counter < size; counter++)
		{
			if ((*cmp)(array[counter]))
			{
				return (counter);
			}
		}
	}
		return (-1);
}
