#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: an integer
 */

void print_diagonal(int n)
{
	int spaces = n;

	while (n > 0)
	{
		while (spaces > 0)
		{
			_putchar(32);
			spaces--;
		}
		_putchar(92);
		_putchar(32);
		n--;
	}
	_putchar(32);
}
