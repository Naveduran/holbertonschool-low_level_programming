#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int counter;

	va_start(argumentos, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(argumentos, int));
		if ((separator != NULL) && (counter != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argumentos);
}
