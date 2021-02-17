#include "holberton.h"

/**
 * print_rev - reverses a string.
 * @s: the original string
 **/

void print_rev(char *s)
{
	int counter = 1;
	for (; *s != '\0'; s++)
	{
		counter++;
	}
	for (; counter != 0; s--)
	{
		_putchar(*s);
		counter--;
	}
	_putchar(10);
}
