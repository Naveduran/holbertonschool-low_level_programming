#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
int fila = 0;
int columna = 0;
int result;
int u;
int d;
for (fila = 0; fila <= 9; fila++)
{
	for (columna = 0; columna <= 9; columna++)
	{
		result = fila * columna;
		if (result > 9)
		{
			u = result % 10;
			d = result / 10;
			_putchar(d + '0');
			_putchar(u + '0');
		}
		else
		{
			_putchar(32);
			_putchar(result + '0');
		}
		if (columna != 9)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar(10);
}
}
