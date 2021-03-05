#include "holberton.h"
/**
 * *malloc_checked - ..
 * @b: ..
 * Return: ..
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
