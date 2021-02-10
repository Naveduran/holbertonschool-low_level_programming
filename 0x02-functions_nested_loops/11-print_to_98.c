#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 *@n: an integer
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{

		while (n < 98)
		{
			printf("%d, ", n);
			n++;
			if (n == 98)
				printf("98");
		}
	}

	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
			if (n == 98)
				printf("98");
		}
	}

	else
	{
		printf("98");
	}
	printf("\n");

}
