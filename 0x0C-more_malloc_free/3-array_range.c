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
	int counter = 0;
	int size;

	if (min > max)
	{
/*		printf("min es mayor que max"); */
		return (NULL);
	}

	size = max - min;
	array = malloc(size * 4);

	if (array == NULL)
	{
/*		printf("no se pudo crear el array en la memoria"); */
		return (NULL);
	}

	for (counter = 0; counter <= (max - min); counter++)
	{
		array[counter] = min + counter;
	}
	return (array);
}
