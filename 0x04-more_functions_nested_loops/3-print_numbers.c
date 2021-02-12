#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 */

void print_numbers(void)
{

	char number;

	for (number = 48; number <= 57; number++)
		_putchar(number);

	_putchar(10);

}
