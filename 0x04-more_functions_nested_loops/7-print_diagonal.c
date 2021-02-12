#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: an integer
 */

void print_diagonal(int size)
{
	int columna, fila;

	if (size <= 0)
		_putchar(10);
	else
		for (fila = 0; fila < size; fila++)
		{
			for (columna = 0; columna < fila; columna++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
}
