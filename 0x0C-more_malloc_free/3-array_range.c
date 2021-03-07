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
	int *pointer = &min;

	if (min > max)
	{
/* min es mayor que max */
		return (NULL);
	}

	if (min == max)
	{
/*min es igual a max */
		return (pointer);
	}

	size = max - min;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
/*"no se pudo crear el array en la memoria*/
		return (NULL);
	}

	for (counter = 0; counter <= (max - min); counter++)
	{
		array[counter] = min + counter;
	}
	return (array);
}
