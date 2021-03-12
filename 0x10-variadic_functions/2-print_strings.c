#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int counter;

	va_start(argumentos, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%s", va_arg(argumentos, char*));
		if ((separator != NULL) && (counter != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argumentos);
}
