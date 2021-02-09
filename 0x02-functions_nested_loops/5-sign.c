#include "holberton.h"

/**
 * print_sign - prints if a number is positive or negative
 * @n: is an int
 *
 * Return: 1 and prints + if n is greater than zero;
 * 0 and prints 0 if n is zero; and
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
