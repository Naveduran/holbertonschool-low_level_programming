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
	char *cheese;

	va_start(argumentos, n);

	for (counter = 0; counter < n; counter++)
	{
		cheese = va_arg(argumentos, char*);
		if (cheese == NULL)
			printf("(nil)");
		else
		{
			printf("%s", cheese);
		}
		if ((separator != NULL) && (counter != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argumentos);
}
