#include "holberton.h"

/**
 * nuevafuncion -  returns the natural square root of a number
 * @n: the constant number
 * @y: the number to change
 * Return: the square root of a number
 */

int nuevafuncion(int n, int y)
{

	if (y > n)
	{
		return (-1);
	}
	else if (y * y == n)
		return (y);
	else
		return (nuevafuncion(n, y + 1));
}

/**
 * _sqrt_recursion - takes a number and send it twice to other function, and
 * then in the new function it gives the square root of the number.
 * @n: a n int
 * Return: an int
 */

int _sqrt_recursion(int n)
{
	return (nuevafuncion(n, 1));
}
