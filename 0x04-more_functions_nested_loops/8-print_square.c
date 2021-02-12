#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: an integer
 */

void print_square(int size)
{
	int columna, fila;


	if (size <= 0)
		_putchar(10);
	else
		for (fila = 0; fila < size; fila++)
		{
			for (columna = 0; columna < size; columna++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
}
