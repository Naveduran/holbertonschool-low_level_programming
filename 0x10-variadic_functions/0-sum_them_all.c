#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: ..
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argumentos;
	int counter;
	unsigned int result;

	va start(argumentos, n);
	if (n == 0)
		return (0);
	for (counter = 0; counter <= n; counter++)
		result = result + va_arg (args, n);
	va_end(args);
	return (result);
}
