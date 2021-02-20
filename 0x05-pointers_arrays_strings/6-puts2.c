#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: the string to be printed
 *
 **/

void puts2(char *str)
{
	int counter;
	int a = 0;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
	}
	if (counter > 0)
	{
		while (a < counter)
		{
			_putchar(str[a]);
			a = a + 2;
		}
		_putchar(11);
	}
}
