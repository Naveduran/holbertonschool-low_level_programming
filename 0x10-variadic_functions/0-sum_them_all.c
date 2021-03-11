#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: ..
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int counter;
	unsigned int result = 0;

	va_start(argumentos, n);

	for (counter = 0; counter < n; counter++)
	{
		result = result + va_arg(argumentos, unsigned int);
	}
	va_end(argumentos);
	return (result);
}
