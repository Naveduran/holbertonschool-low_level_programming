#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int number = 97;

	int counter = 0;

	while (counter <= 9)
	{
		while (number <= 'z')
		{
			_putchar(number);
			number++;
		}
		number = 'a';
		_putchar(10);
		counter++;
	}
}
