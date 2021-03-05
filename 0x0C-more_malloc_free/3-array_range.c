#include "holberton.h"
/**
 * *array_range - ..
 * @min: ..
 * @max: ..
 * Return: ..
 */
int *array_range(int min, int max)
{
	int *array;

	if (min > max)
		return (NULL);

	array = malloc (max - min);

	if (array == NULL)
		return (NULL);

	return (array);
}
