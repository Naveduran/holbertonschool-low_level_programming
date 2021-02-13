#include <stdio.h>

/**
 * main - prints finds and prints the largest prime factor of the number
 * 612852475143
 * Return: always zero.
 *
 */

int main(void)
{
	unsigned long number = 612852475143;
	int counter;
	unsigned long imprimir;

	for (counter = 2; number > 1; counter++)
	{
		if ((number % counter) == 0)
		{
			number = number / counter;
			imprimir = counter;
			counter = 1;
		}
	}
	printf("%lu\n", imprimir);
	return (0);
}
