#include "holberton.h"
/**
 * print_triangle - prints a triangle of #, followed by a new line.
 * @size: an integer that defines the size
 */
void print_triangle(int size)
{
	int fila, counteresp, counternum;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
		for (fila = 0; fila < size; fila++)
		{
			counteresp = size - fila - 1;
			while (counteresp > 0)
			{
				_putchar(32);
				counteresp--;
			}
			counternum = fila + 1;
			while (counternum > 0)
			{
				_putchar(35);
				counternum--;
			}
			_putchar(10);
		}
}
