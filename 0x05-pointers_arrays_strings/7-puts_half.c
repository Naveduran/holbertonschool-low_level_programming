#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to print
 *
 **/

void puts_half(char *str)
{
	int lenght, medium, n;

	if (*str != '\0')
	{
		for (lenght = 0; str[lenght] != '\0'; lenght++)
		{
		}

		if (lenght % 2 != 0)
		{
			n = (lenght - 1) / 2;
			for (; str[n]; n++)
			{
				_putchar(str[n]);
			}
		}

		else
		{
			medium = lenght / 2;
			for (; medium < lenght; medium++)
			{
				_putchar(str[medium]);
			}
		}
		_putchar(11);

	}
}
