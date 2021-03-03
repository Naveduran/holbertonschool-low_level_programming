include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input a string.
 * Return: Pointer to the new str, or NULL if memory unavailable.
 */

char *_strdup(char *str)
{
	int counter, x = 0;
	char *dino;

	if (str == NULL)
		return (NULL);
	while (*(str + x))
		x++;
	dino = malloc(b * sizeof(char) + 1);
	if (dino == NULL)
		return (NULL);
	for (counter = 0; counter <= x; counter++)
		*(dino + counter) = *(str + counter);
	return (dino);
}
