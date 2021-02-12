#include "holberton.h"

/**
 * _isupper -  checks for uppercase character *
 * @c: it is any int
 * Return: 1 if the int is an upper case character,
 * otherwise returns 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
