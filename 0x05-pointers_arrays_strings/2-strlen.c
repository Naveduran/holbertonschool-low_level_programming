#include "holberton.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a string to check the lenght
 *
 * Return: the lenght of the string
 **/

int _strlen(char *s)
{
	int lenght;

	while (*s++)
	{
		lenght++;
	}
	return (lenght);
}
