#include "holberton.h"

/**
 * main - prints a string using _putchar
 *
 * Return: Success
 */

int main(void)
{
	char a[9] = {72, 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	int b;

	for (b = 0; b < 9; b++)
		_putchar(a[b]);

	_putchar(10);

	return (0);
}
