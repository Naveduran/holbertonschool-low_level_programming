#include "holberton.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: the string to be printed
 *
 **/

void puts2(char *str)
{
	int max;
	int counter = 0;

	for (max = 0; str[counter] != '\0'; str++)
	{
		max++;
	}
	if (max = 0)
	{
		break;
	}
	max--;
	while (counter < max)
	{
		_putchar(*str);
		counter = counter + 2;
	}
	_putchar(10);

}
