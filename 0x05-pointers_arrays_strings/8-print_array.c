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
	int b;

	for (b = 0 ; a[b] != '\0'; b++);

	if (n > b)
		n = b - 1;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);
		if (counter != (n - 1))
			printf(", ");
		else
		{
			printf("\n");
		}
	}
}
