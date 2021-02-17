#include "holberton.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: the string to be printed
 *
 **/

void puts2(char *str)
{
	int counter = 0;

	while (counter < 10)
	{
		_putchar(str[counter]);
		counter = counter +2;
	}
	_putchar(10);

}
