#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: any integer.
 *
 */

void print_number(int n)
{
/*para saber si es negativo, volverlo positivo e imprimir el menos */
	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
if (n > 999999999 || n < -999999999)
{
	_putchar(((((((((((n / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10)
/ 10) % 10) + 48);
}
if (n > 99999999 || n < -99999999)
{
	_putchar((((((((((n / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10)
% 10)
+ 48);
}
if (n > 9999999 || n < -9999999)
{
	_putchar(((((((((n / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10)
+ 48);
}
if (n > 999999 || n < -999999)
{
	_putchar((((((((n / 10) / 10) / 10) / 10) / 10) / 10) % 10) + 48);
}
if (n > 99999 || n < -99999)
{
	_putchar(((((((n / 10) / 10) / 10) / 10) / 10) % 10) + 48);
}
if (n > 9999 || n < -9999)
{
	_putchar((((((n / 10) / 10) / 10) / 10) % 10) + 48);
}
if (n > 999 || n < -999)
{
	_putchar(((((n / 10) / 10) / 10) % 10) + 48);
}
if (n > 99 || n < -99)
{
	_putchar((((n / 10) / 10) % 10) + 48);
}
if (n > 9 || n < -9)
{
	_putchar(((n / 10) % 10) + 48);
}
if (n > 0 || n < 0)
{
	_putchar((n % 10) + 48);
}
if (n == 0)
	_putchar(48);
}
