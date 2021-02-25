#include "holberton.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: an int
 * @y: an int
 * Return: an int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
	{
		return (0);
	}
	y--;
	return (x * (_pow_recursion(x, y)));
}
