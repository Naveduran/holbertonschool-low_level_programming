#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer
 * @n: number of elements
 *
 **/

void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);

		if (counter != (n - 1))
			printf(", ");
		else
			printf("\n");
	}

}
