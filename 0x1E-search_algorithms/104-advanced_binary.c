#include "search_algos.h"

/**
 * advanced_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array:  a pointer to the first element of the array to search in.
 * It should be sorted in ascending order, and the values are stored only once
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, or -1 if the array is null
 * or the values don't exist in the array
 */
int advanced_search(int *array, size_t size, int value)
{
	unsigned int index = 0, middle, nm;
	int result;

/*-----If there is an array, print it-----*/
	if (array == NULL)
		return (-1);
	printf("Searching in array: %d", array[index]);
	for (index = 1; index <= size - 1 && array[index]; index++)
	{	printf(", %d", array[index]);
	}
	printf("\n");

/*-----Assign the middle element-----*/
	if (size % 2 == 0) /*Size is odd*/
		middle = (size / 2) - 1;
	else /*Size is even*/
		middle = (size - 1) / 2;

/*-----Take decisions-----*/
	if (value == array[middle]) /*Found!*/
		return (middle);
	else if (size == 1) /*-----The element is not in the array*/
		return (-1);
	else if (value > array[middle]) /*----It's to the right------*/
	{	nm = middle + 1; /* Save the previous index number */
		result = (binary_search(&array[nm], (size - middle) - 1, value));
		printf("result %d", result);
		if (result == -1)
			return (-1);
		else
			return (result + nm); /*Sum the previous index to get the full index*/
	}	else
	{
		result = (binary_search(array, middle, value));
		printf("result %d", result);
		if (result == -1)
			return (-1);
		else
			return (result);
	}
}
