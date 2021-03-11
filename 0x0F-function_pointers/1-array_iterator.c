#include <stdlib.h>
/**
 * array_iterator - ..
 * @array: ..
 * @size: ..
 * @action:..
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array && size && action)
		for (counter = 0; counter < size; counter++)
		{
			(*action)(array[counter]);
		}
}
