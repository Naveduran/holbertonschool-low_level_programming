#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a
 * specific char
 * @size: size of the array
 * @c: char to initialize
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a = 0;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return ('\0');

	}

	else
	{
		for (a = 0; a < size; a++)
		{
			arr[a] = c;
		}
		return (arr);

	}
	return (NULL);
}
