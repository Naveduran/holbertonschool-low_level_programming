#include "holberton.h"

/**
 * print_square - prints a square, full of numerals followed by a new line
 * @size: an integer that describes the size of the square
 *
 */

void print_square(int size)
{
	int fila, columna;

	for (fila = 0; fila < size; fila++)
	{
		for (columna = 0; columna < size; columna++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	_putchar(10);
}
