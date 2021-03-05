#include "holberton.h"

/**
 * *_calloc - ..
 * @nmemb: ..
 * @size: ..
 * Return: ..
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);
	for (counter = 0; counter <= size; counter++)
	{
		pointer[counter] = 0;
	}
	return (pointer);
}
