#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: a number
 * Return: a factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial (n - 1));
}
