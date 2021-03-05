#include "holberton.h"

/**
 * *_calloc - ..
 * @nmemb: ..
 * @size: ..
 * Return: ..
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);
	else
		return (pointer);
}
