#include "holberton.h"

/**
 * print_rev - reverses a string.
 * @s: the first position of the original string
 **/

void print_rev(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	{
		counter++;
	}
	s--;

	for (; counter != 0; s--)
	{
		_putchar(*s);
		counter--;
	}
	_putchar(10);
}
