#include "holberton.h"

/**
 * _isdigit - check if ant integer is a number *
 * @c: is an integer
 *
 * Return: 1 if the int is a number from 0 to 9.
 * other wise it returns zero.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
