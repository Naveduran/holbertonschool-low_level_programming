#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 */

void more_numbers(void)
{
	int unidad, decena, number, counter;

	for (counter = 0; counter <= 10; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			unidad = number % 10;
			decena = number / 10;
			if (number > 9)
			{
				_putchar(decena + 48);
			}
			_putchar(unidad + 48);
		}
		_putchar(10);
	}
}
