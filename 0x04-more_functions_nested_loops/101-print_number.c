#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: any integer.
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-'), _putchar('2'), _putchar('1'), _putchar('4');
		_putchar('7'), _putchar('4'), _putchar('8'), _putchar('3');
		_putchar('6'), _putchar('4'), _putchar('8');
	}
	if (n < 0 && n != -2147483648)
	{
		_putchar(45), n = n * -1;
	}
	if ((n > 999999999 || n < -999999999) && (n != -2147483648))
		_putchar(((n / 1000000000) % 10) + 48);
	if ((n > 99999999 || n < -99999999) && (n != -2147483648))
		_putchar(((n / 100000000) % 10) + 48);
	if ((n > 9999999 || n < -9999999) && (n != -2147483648))
		_putchar(((n / 10000000) % 10) + 48);
	if ((n > 999999 || n < -999999) && (n != -2147483648))
		_putchar(((n / 1000000) % 10) + 48);
	if ((n > 99999 || n < -99999) && (n != -2147483648))
		_putchar(((n / 100000) % 10) + 48);
	if ((n > 9999 || n < -9999) && (n != -2147483648))
		_putchar(((n / 10000) % 10) + 48);
	if ((n > 999 || n < -999) && (n != -2147483648))
		_putchar(((n / 1000) % 10) + 48);
	if ((n > 99 || n < -99) && (n != -2147483648))
		_putchar(((n / 100) % 10) + 48);
	if ((n > 9 || n < -9) && (n != -2147483648))
		_putchar(((n / 10) % 10) + 48);
	if ((n > 0 || n < 0) && (n != -2147483648))
		_putchar((n % 10) + 48);
	if (n == 0)
		_putchar(48);
}
