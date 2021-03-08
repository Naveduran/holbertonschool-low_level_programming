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
/* min es mayor que max */
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
/*"no se pudo crear el array en la memoria*/
		return (NULL);
	}

	for (counter = 0; counter <= (max - min); counter++)
	{
/*para cada elemento del array asignele el numero mínimo más el contador */
		array[counter] = min + counter;
	}
	return (array);
}
